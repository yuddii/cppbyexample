#include <iostream>

class Account
{

public:
    void withDraw(double amount)
    {
        if (amount > balance)
        {
            std::cout << "not enough" << std::endl;
        }
        else
        {
            balance -= amount;
        }
    }

    double getAmount()
    {
        return balance;
    }

    void addAmount(double amount)
    {
        balance += amount;
    }

private:
    double balance;
};