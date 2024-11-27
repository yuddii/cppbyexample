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
    SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == INVALID_SOCKET)
    {
        std::cerr << "创建套接字失败" << std::endl;
        closesocket(clientSocket);
        WSACleanup();
        return -1;
    }

    // 设置服务器地址结构
    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddr.sin_port = htons(PORT);

    // 连接服务器
    if (connect(clientSocket, (sockaddr *)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
    {
        std::cerr << "连接服务器失败" << std::endl;
        closesocket(clientSocket);
        WSACleanup();
        return -1;
    }

    std::cout << "已经连接到服务器" << std::endl;

    // 发送数据
    std::string message = "HELLO,SERVER";
    int byteWritten = send(clientSocket, message.c_str(), message.length(), 0);
    if (byteWritten == SOCKET_ERROR)
    {
        std::cerr << "客户端发送数据失败" << std::endl;
        closesocket(clientSocket);
        WSACleanup();
        return -1;
    }

    // 接收数据
    char buffer[BUFFER_SIZE];
    int byteRead;
    while (byteRead = recv(clientSocket, buffer, BUFFER_SIZE, 0) > 0)
    {
        buffer[byteRead] = '\0';
        std::cout << "收到服务器消息：" << buffer << std::endl;
    }

    closesocket(clientSocket);
    WSACleanup();
    return 0;
}