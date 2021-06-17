#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_number(int &a, int &b);

int main()
{
    int x{}, y{};

    cout << "Enter the values: ";
    cin >> x >> y;

    cout << x << " - " << y << endl;
    swap_number(x, y);
    cout << x << " - " << y << endl;

    return 0;
}

void swap_number(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}