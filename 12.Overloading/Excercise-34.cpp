/**
 * @file Excercise-34.cpp
 * @author Koushik
 * @brief 
 * @version 0.1
 * @date 2021-09-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

class Money
{
    int dollars;
    int cents;

public:
    Money(int dollars, int cents);
    Money(int total);

    bool operator==(const Money &rhs) const;
    bool operator!=(const Money &rhs) const;
};

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars{total / 100}, cents{total % 100} {}

bool Money::operator==(const Money &rhs) const
{
    return (this->dollars == rhs.dollars) && (this->cents == rhs.cents);
}

bool Money::operator!=(const Money &rhs) const
{
    return (this->dollars != rhs.dollars) && (this->cents != rhs.cents);
}

int main()
{
    Money m1{717};
    Money m2{7, 17};

    if (m1 == m2)
        std::cout << "m1 and m2 they both are same.\n";
    else
        std::cout << "m1 and m2 they both are not same.\n";

    return 0;
}