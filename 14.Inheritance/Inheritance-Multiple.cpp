#include <iostream>

using std::cout;
using std::endl;

/**
 * * Example of Multiple Inheritance
 */

class Base_1
{
public:
    Base_1()
    {
        cout << "\n Base_1's Constructor Called \n";
    }
};

class Base_2
{
public:
    Base_2()
    {
        cout << "\n Base_2's Constructor Called \n";
    }
};

class Derived : public Base_1, public Base_2
{
public:
    Derived()
    {
        cout << "\n Derived's Constructor Called \n";
    }
};

int main()
{
    Derived d;
    return 0;
}