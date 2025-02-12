#include <iostream>
#include "animal.h"

class dog : public Animal
{
private:
    /* data */
public:
    dog(/* args */);
    ~dog();
    void makeSound() override;
};

dog::dog(/* args */)
{
}

dog::~dog()
{
}

void dog::makeSound()
{
    std::cout << "wa wa wa" << std::endl;
}