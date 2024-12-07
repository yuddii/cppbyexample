#include <iostream>

int main()
{

    int intVar = 10;
    float floatVar = 10.556456f;
    double doubleVar = 3.1415926;
    char charVar = 'a';
    std::cout << intVar << std::endl;
    std::cout << floatVar << std::endl;
    std::cout << doubleVar << std::endl;
    std::cout << charVar << std::endl;

    int arrayVar[3] = {1, 2, 3};
    int *ptrVar = &intVar;
    struct MyStruct
    {
        int a;
        float b;
    };

    MyStruct myStruct;
    myStruct.a = 15;
    myStruct.b = 15.11f;
    std::cout << myStruct.a << std::endl;
    std::cout << myStruct.b << std::endl;
    return 0;
}