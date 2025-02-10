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