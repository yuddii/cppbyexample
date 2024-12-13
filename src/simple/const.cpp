#include <iostream>
#include <cstring>
#include <unordered_map>
#include <windows.h>
#include <sys/time.h>
#include <functional>

void PrintMap(std::unordered_map<int, std::string> myMap)
{
    for (auto it = myMap.begin(); it != myMap.end(); it++)
    {
        std::cout << "键：" << it->first << "值：" << it->second << std::endl;
    }
    std ::cout << "map个数：" << myMap.size() << std::endl;
    return;
}

int sub(int a, int b)
{
    return a - b;
}

void bindLearn()
{
    auto boundSub = std::bind(sub, std::placeholders::_2, std::placeholders::_1);
    int ans = boundSub(5, 4);
    std::cout << ans << std::endl;
    return;
}

int main()
{

    SetConsoleOutputCP(CP_UTF8); // 设置控制台输出为 UTF-8 编码
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

    for (int i = 0; i < 3; i++)
    {
        std::cout << "arr:" << arrayVar[i] << std::endl;
    }
    std::cout << "point:" << ptrVar << std::endl;

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

    int cmp = strcmp("abc", "abc");
    std::cout << "strcmp" << cmp << std::endl;

    std::unordered_map<int, std::string> myMap;
    myMap[1] = "yudi";
    myMap[2] = "fdsklfjsl";
    PrintMap(myMap);
    myMap.erase(1);
    PrintMap(myMap);

    bindLearn();
    return 0;
}