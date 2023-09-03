// Swapping String contents 🦢
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string a{}, b{};
    a = "AAA";
    b = "BBB";

    cout << "Before swap" << endl
         << "\ta: " << a << "\tb: " << b << endl;

    // We can use the swap function this way
    a.swap(b);

    cout << "After swap" << endl
         << "\ta: " << a << "\tb: " << b << endl;

    // Or, We can use the swap function this way
    swap(a, b);

    cout << "Then, After swap" << endl
         << "\ta: " << a << "\tb: " << b << endl;
}