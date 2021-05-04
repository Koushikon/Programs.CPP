// C++ Program to swap two numbers and two characters (Without using temp)
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers to swap : ";
    cin >> a >> b;
    cout << "The value before swaping are : " << a << " and " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "The value after swaping are : " << a << " and " << b << endl
         << endl;

    char x, y;
    cout << "Enter two character to swap : ";
    cin >> x >> y;
    cout << "The character before swaping are : " << x << " and " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "The character after swaping are : " << x << " and " << y << endl;
    return 0;
}