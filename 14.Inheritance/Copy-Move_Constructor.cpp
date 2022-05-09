#include <iostream>

using std::cout;
using std::endl;

class Base
{
    int value;

public:
    Base()
    {
        cout << "No-Args Base" << endl;
    }

    Base(int x) : value{x}
    {
        cout << "1-Args Base" << endl;
    }

    Base(const Base &other) : value{other.value}
    {
        cout << "Copy-Args Base" << endl;
    }

    Base &operator=(const Base &rhs)
    {
        cout << "Copy Assignment Operator Base" << endl;
        if (this == &rhs)
            return *this;

        value = rhs.value;
        return *this;
    }

    ~Base()
    {
        cout << "Destructor Base" << endl;
    }
};

class Derived : public Base
{
    int double_value;

public:
    Derived()
    {
        cout << "No-Args Derived" << endl;
    }

    Derived(int x) : Base{x}, double_value{x * 2}
    {
        cout << "1-Args Derived" << endl;
    }

    Derived(const Derived &other) : Base{other}, double_value{other.double_value * 2}
    {
        cout << "Copy-Args Derived" << endl;
    }

    Derived &operator=(const Derived &rhs)
    {
        cout << "Copy Assignment Operator Derived" << endl;
        if (this == &rhs)
            return *this;
        Base::operator=(rhs);
        double_value = rhs.double_value;
        return *this;
    }

    ~Derived()
    {
        cout << "Destructor Derived" << endl;
    }
};

main()
{
    {
        Base b1{225}; // Overloaded Constructor
        Base b2{b1};  // Copy Contructor
        b1 = b2;      // Copy Assignment Operator
    }

    Derived d1{555}; // Overloaded Constructor
    Derived d2{d1};  // Copy Contructor
    d1 = d2;         // Copy Assignment Operator

    return 0;
}