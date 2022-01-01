/**
 * @file Excercise-35.cpp
 * @author Koushik
 * @brief Operator Overloading as Non-member Functions
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
    int get_dollars() const { return dollars; }
    int get_cents() const { return cents; }

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----

    Money operator=(const Money &rhs);
    friend Money operator+(const Money &lhs, const Money &rhs);

    //----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
};

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars{total / 100}, cents{total % 100} {}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----

Money Money::operator=(const Money &rhs)
{
    if (this == &rhs)
        return *this;
    dollars = rhs.dollars;
    cents = rhs.cents;
    return *this;
}

Money operator+(const Money &lhs, const Money &rhs)
{
    int dollar{lhs.get_dollars() + rhs.get_dollars()};
    int cents{lhs.get_cents() + rhs.get_cents()};
    if (cents > 100)
    {
        dollar += (cents / 100);
        cents = cents % 100;
    }
    Money temp{dollar, cents};
    return temp;
}

//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----

int main()
{
    Money m1{250};
    Money m2{5, 75};

    Money m3{100};

    m3 = m1 + m2;

    std::cout << m3.get_dollars() << "." << m3.get_cents() << "\n";

    return 0;
}
