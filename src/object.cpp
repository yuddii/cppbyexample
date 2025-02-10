#include <iostream>
#include "object.h"
int object()
{

    Person p;
    p.name = "yudi";
    p.age = 24;
    std::cout << "name:" << p.name << " age:" << p.age << std::endl;
    return 0;
}