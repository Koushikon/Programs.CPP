#include <iostream>

using std::cout;
using std::endl;

class Operation
{
    int a, b, c;

public:
    Operation(int x = 0, int y = 0, int z = 0) : a{x}, b{y}, c{z} {}

    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }

    void Output()
    {
        cout << "\nA= " << a
             << "\nB= " << b
             << "\nC= " << c;
    }

    ~Operation()
    {
        // cout << "\nObject Destroyed\n";
    }
};

int main()
{
    Operation y(11, 22, 33);
    -y;
    y.Output();

    return 0;
}