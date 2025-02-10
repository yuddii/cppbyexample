#include <iostream>

class Person
{
public:
    std::string name;
    int age;

    void displayInfo()
    {
        std::cout << "name: " << name << " age: " << age << std::endl;
    }

protected:
private:
};