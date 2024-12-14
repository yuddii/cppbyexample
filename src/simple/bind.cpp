#include <iostream>
#include <functional>

class IAnimal
{
public:
    virtual void makeSound() = 0;
};

class Dog : public IAnimal
{
public:
    void makeSound() override
    {
        std::cout << "dog dog" << std::endl;
    }
};

class Cat : public IAnimal
{
public:
    void makeSound() override
    {
        std::cout << "cat cat!!!" << std::endl;
    }
};

int RunFunc(std::function<void()> f)
{
    f();
}

// 绑定成员函数
int main()
{
    Dog d1;
    auto dog = std::bind(&IAnimal::makeSound, &d1);
    RunFunc(dog);
    Cat c1;
    auto cat = std::bind(&IAnimal::makeSound, &c1);
    RunFunc(cat);
    return 0;
}