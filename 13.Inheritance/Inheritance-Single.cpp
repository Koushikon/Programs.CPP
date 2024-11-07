#include <iostream>

using std::cout;
using std::endl;

/**
 * * Example of Single Inheritance
 */

class Base
{
public:
    Base()
    {
        cout << "\n Base's Constructor Called \n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "\n Derived's Constructor Called \n";
    }
};

int main()
{
    Derived d; // Creating Derived class object
    return 0;
}