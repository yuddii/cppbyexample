#include <iostream>
#include <cstring>
#include "task.h"

using namespace MyNameSpace;

Task::~Task()
{
    std::cout << "good bye" << std::endl;
}

void Task::Run()
{
    for (int i = 0; i < 50; i++)
    {
        std::cout << name_ << " " << age_ << std::endl;
    }
}