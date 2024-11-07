#include <iostream>

using std::cout;
using std::endl;

class Base
{
    int numx;

public:
    Base() : numx{0}
    {
        cout << "Base cons... " << endl;
    }
    Base(int x) : numx{x}
    {
        cout << "Base 1-args cons... " << numx << endl;
    }
    ~Base()
    {
        cout << "Base des... " << endl;
    }
};

class Derived : public Base
{
    using Base::Base;
    int numy;

public:
    Derived() : numy{0}
    {
        cout << "Derived cons... " << endl;
    }
    Derived(int y) : numy{y * 2}
    {
        cout << "Derived 1-args cons... " << numy << endl;
    }
    ~Derived()
    {
        cout << "Derived des... " << endl;
    }
};

int main()
{
    Base b1{};
    Base b2{10};

    Derived d1{};
    Derived d2{15};
    return 0;
}