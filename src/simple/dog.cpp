#include <iostream>
#include "animal.h"

class dog : public Animal
{
private:
    /* data */
public:
    dog(/* args */);
    ~dog();
};

dog::dog(/* args */)
{
}

dog::~dog()
{
}

dog::makeSound() override
{
    std::cout << "wa wa wa" << std::endl;
}
