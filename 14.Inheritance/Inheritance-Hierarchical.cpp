#include <iostream>

using std::cout;
using std::endl;

/**
 * * Example of Hierarchical Inheritance
 * * Vehicle -> Car
 * * Vehicle -> Train
 */

class Vehicle
{
public:
    Vehicle()
    {
        cout << "\n Vehicle's Constructor Called \n";
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "\n Car's Constructor Called \n";
    }
};

class Train : public Vehicle
{
public:
    Train()
    {
        cout << "\n Train's Constructor Called \n";
    }
};

int main()
{
    Car c;
    Train t;
    return 0;
}