#include <iostream>
#include <ctime>
#include <cstring>
#include "animal.h"
#include <winsock2.h>
#include <ws2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int randNum = rand();
    std::cout << "随机调用：" << randNum << std::endl;

    char stateStr[] = "123";
    int state = atoi(stateStr);
    std::cout << "atoi使用：" << state << std::endl;

    Animal *animal = new Animal();
    std::string ni(animal->GetText());
    std::cout << "Animail:" << ni << std::endl;

    // winSocket 2.2初始化 WSADATA wsaData;
    WSADATA wsaData;
    int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (iResult != 0)
    {
        std::cout << "WSAStartup Start Failed Err:" << iResult << std::endl;
        return -1;
    }

    struct addrinfo hints, *result = NULL, *ptr = NULL;
    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;

    iResult = getaddrinfo("localhost", NULL, &hints, &result);
    if (iResult != 0)
    {
        std::cout << "getaddrinfo fail with error" << gai_strerror(iResult) << std::endl;
        WSACleanup();
        return -1;
    }

    for (ptr = result; ptr != NULL; ptr = ptr->ai_next)
    {

        struct sockaddr_in *ipv4 = (struct sockaddr_in *)ptr->ai_addr;
        char *ipstr = inet_ntoa(ipv4->sin_addr);
        std ::cout << "IP Address:" << ipstr << std::endl;
    }
    freeaddrinfo(result);
    WSACleanup();
}