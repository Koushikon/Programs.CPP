#include <iostream>

using std::cout;
using std::endl;

/**
 * * Example of Hybrid Inheritance
 * * Vehicle -> Car -> BMW
 * * Vehicle -> Train -> Metro
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

class BMW : public Car
{
public:
    BMW()
    {
        cout << "\n BMW's Constructor Called \n";
    }
};

class Metro : public Train
{
public:
    Metro()
    {
        cout << "\n Metro's Constructor Called \n";
    }
};

int main()
{
    BMW b;
    Metro m;
    return 0;
}