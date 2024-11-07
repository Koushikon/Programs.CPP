#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int number{};
    cin >> number;

    if (number % 2 == 0)
        cout << number << " is Even." << endl;
    else
        cout << number << " is Odd." << endl;

    return 0;
}