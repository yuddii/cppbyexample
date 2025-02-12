#include <iostream>

void control()
{
    int num = 1;
    if (num > 10)
    {
        std::cout << "num > 10" << std::endl;
    }
    else
    {
        std::cout << "num < 10" << std::endl;
    }

    int i = 0;
    while (i < 5)
    {
        std::cout << i << std::endl;
        i++;
    }

    for (i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }

    int a = 0;
    do
    {
        std::cout << a << std ::endl;

    } while (a < 0);
}