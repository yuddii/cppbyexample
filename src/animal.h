#include <iostream>

class Animal
{
public:
    virtual void makeSound() {}
    const char *GetText() const
    {
        return "hello,world";
    }
};