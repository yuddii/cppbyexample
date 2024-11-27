#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <cstring>
#define PORT 8888
#define BUFFER_SIZE 1024

int main()
{
    WSADATA wsData;
    WORD wVersionRequested = MAKEWORD(2, 2); // Winsock2.2版本
    if (WSAStartup(wVersionRequested, &wsData) != 0)
    {
        std::cerr << "初始化Winsock库失败！" << std::endl;
        return -1;
    }

    // 创建套接字
    // 第一个参数：IP地址类型，AF_INET表示使用IPv4，如果使用IPv6请使用AF_INET6。
    // 第二个参数：数据传输方式，SOCK_STREAM表示流格式、面向连接，多用于TCP。SOCK_DGRAM表示数据报格式、无连接，多用于UDP。
    // 第三个参数：协议，0表示根据前面的两个参数自动推导协议类型。设置为IPPROTO_TCP和IPPTOTO_UDP，分别表示TCP和UDP。
    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == INVALID_SOCKET)
    {
        std::cerr << "创建套接字失败" << std::endl;
        closesocket(serverSocket);
        WSACleanup();
        return -1;
    }

    // 设置服务器地址结构
    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddr.sin_port = htons(PORT);

    // 创建连接
    if (bind(serverSocket, (sockaddr *)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
    {
        std::cerr << "绑定套接字失败" << std::endl;
        closesocket(serverSocket);
        WSACleanup();
        return -1;
    }

    // 监听消息
    if (listen(serverSocket, 5) == SOCKET_ERROR)
    {
        std::cerr << "监听消息失败" << std::endl;
        closesocket(serverSocket);
        WSACleanup();
        return -1;
    }

    std::cout << "服务器启动成功，等待客户端消息。。。" << std::endl;

    // 接受客户端连接
    sockaddr_in clientAddr;
    int clientAddrLen = sizeof(clientAddr);
    SOCKET clientSocket = accept(serverSocket, (sockaddr *)&clientAddr, &clientAddrLen);
    if (clientSocket == INVALID_SOCKET)
    {
        std::cerr << "接受客户端连接失败" << std::endl;
        closesocket(serverSocket);
        WSACleanup();
        return -1;
    }

    // 输出客户端连接信息
    char *clientIP = inet_ntoa(clientAddr.sin_addr);
    std::cout << "客户端" << clientIP << "已连接，端口" << ntohs(clientAddr.sin_port) << std::endl;

    // 接受并且处理客户端数据
    char buffer[BUFFER_SIZE];
    int bytesRead;
    while ((bytesRead = recv(clientSocket, buffer, BUFFER_SIZE, 0)) > 0)
    {
        buffer[bytesRead] = '\0';
        std::cout << "收到客户端消息：" << buffer << std::endl;

        // 接受到数据，然后发送客户端
        std::string response = "hello";
        int bytesWitten = send(clientSocket, response.c_str(), response.length(), 0);
        if (bytesWitten == SOCKET_ERROR)
        {
            std::cerr << "服务器发送消息失败" << std::endl;
            closesocket(serverSocket);
            closesocket(clientSocket);
            WSACleanup();
            return -1;
        }
    }

    // 程序结束清理Winsock,关闭socket
    closesocket(clientSocket);
    closesocket(serverSocket);
    WSACleanup();

    return 0;
}
