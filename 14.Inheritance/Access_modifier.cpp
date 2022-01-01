#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
    int numx{};
    void display()
    {
        cout << "num X: " << numx << '\n'
             << "num Y: " << numy << '\n'
             << "num Z: " << numz << '\n';
    }

protected:
    int numy{};

private:
    int numz{};
};

class Derived : public Base
{
public:
    void acces_base_elements()
    {
        numx = 15;
        numy = 25;
        display();
        // numz = 35; // error: numz is private
    }
};

int main()
{
    Base b1;
    b1.numx = 105;
    // b1.numy = 205; // error: numy is protected
    // b1.numz = 305; // error: numz is private
    b1.display();

    Derived d1;
    d1.numx = 155;
    // d1.numy = 255; // error: numy is protected
    // d1.numz = 355; // error: numz is private
    cout << "num X: " << d1.numx << endl;
    d1.acces_base_elements();

    return 0;
}