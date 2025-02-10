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