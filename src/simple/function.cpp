#include <iostream>

void printNum(int num)
{
    std::cout << num << std::endl;
}

void printNumRef(int &num)
{
    std::cout << num << std::endl;
}

int main()
{
    int num = 10;
    printNum(num);
    printNumRef(num);
    return 1;
}