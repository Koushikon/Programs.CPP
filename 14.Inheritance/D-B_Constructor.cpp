#include <iostream>

using std::cout;
using std::endl;

class Base {
    int value;
    
    public:
    Base() : value{} {
        cout << "Base No-Args" << endl;
    }
    Base(int x) : value{x} {
        cout << "Base 1-Args" << endl;
    }
    ~Base(){
        cout << "Base Destroyed" << endl;
    }
};

class Derived : public Base {
    int double_value;
    
    public:
    Derived() : Base{}, double_value{} {
        cout << "Derived No-Args" << endl;
    }
    Derived(int x) : Base{x}, double_value{x * 2} {
        cout << "Derived 1-Args" << endl;
    }
    ~Derived(){
        cout << "Derived Destroyed" << endl;
    }
};

int main()
{
    // From Base class
    Base b1;
    Base b2{11};

    // From Derived class
    Derived d1;
    Derived d2{1111};
    return 0;
}