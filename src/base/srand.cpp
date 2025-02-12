#include <iostream>
#include <ctime>
#include <cstring>
#include "animal.h"

#pragma comment(lib, "ws2_32.lib")

void srand()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int randNum = rand();
    std::cout << "随机调用：" << randNum << std::endl;

    char stateStr[] = "123";
    int state = atoi(stateStr);
    std::cout << "atoi使用：" << state << std::endl;

    Animal *animal = new Animal();
    std::string ni(animal->GetText());
    std::cout << "Animal:" << ni << std::endl;
}