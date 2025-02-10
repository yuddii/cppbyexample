#include <iostream>
#include "animal.h"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat(/* args */);
    ~Cat();
    void makeSound() override
    {
        std::cout << "mi mi mi" << std::endl;
    }
};

Cat::Cat(/* args */)
{
    std::cout << "New Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Clear Cat" << std::endl;
}