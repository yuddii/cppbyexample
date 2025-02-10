#include <iostream>
#include "account.h"

void accout()
{
    Account a;
    a.addAmount(100);
    std::cout << a.getAmount() << std::endl;
    a.withDraw(12.5);
    std::cout << a.getAmount() << std::endl;
}