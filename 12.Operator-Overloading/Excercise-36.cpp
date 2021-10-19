/**
 * @file Excercise-36.cpp
 * @author Koushik
 * @brief Overloading Insertion Operator << as Non-member Functions
 * @version 0.1
 * @date 2021-10-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cout;
using std::endl;

class Money
{
    int dollars;
    int cents;

public:
    Money(int dollars, int cents);
    Money(int total);

    friend std::ostream &operator<<(std::ostream &os, const Money &money);
};

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars{total / 100}, cents{total % 100} {}

std::ostream &operator<<(std::ostream &os, const Money &money)
{
    os << "dollars: " << money.dollars
       << " cents: " << money.cents;
    return os;
}

int main()
{
    Money amount{1, 70};
    cout << amount;
    return 0;
}