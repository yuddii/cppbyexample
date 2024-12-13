#include <iostream>
#include <functional>

class Base
{
public:
    virtual void operation(int num)
    {
        return num;
    }
}

class Derived1
{
public:
    int operation(int num) override
    {
        return num * 3;
    }
};

int main()
{
    return 0;
}