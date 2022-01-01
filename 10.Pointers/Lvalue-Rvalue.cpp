#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int max(int x, int y = 0);

int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    int x{100}; // x (L-value) and 100 (R-value)
    int y{0};   // y (L-value) and 0 (R-value)

    string name;    // name (L-value)
    name = "Frank"; // Frank (R-value)

    x = 1000;   // 1000 is an R-value
    x = x + 20; // x (L-value) assigned to (x+20) R-value
    x = x + y;  // (x+y) R-value assigned to x (L-value)

    int max_num = max(20, 30); // max(20, 30) R-value

    cout << x << endl
         << y << endl
         << max_num << endl;

    return 0;
}