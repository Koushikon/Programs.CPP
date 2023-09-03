#include <iostream>

using std::cout;
using std::endl;

/**
 * * Addition of 2 Complex Number Using Operator Overloading
 */

class Complex
{
    int a, b;

public:
    Complex(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }

    Complex(Complex &x)
    {
        a = x.a;
        b = x.b;
    }

    Complex operator+(Complex z)
    {
        Complex p;
        p.a = a + z.a;
        p.b = b + z.b;
        return (p);
    }

    void print()
    {
        cout << "\nThe Complex Number is: " << a << "+" << b << "i";
    }

    ~Complex() {}
};

int main()
{
    Complex x(10, 12), y(20, 30), z;

    z = x + y;
    z.print();

    return 0;
}