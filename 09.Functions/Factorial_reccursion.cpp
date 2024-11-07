#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int n);

int main()
{
    int number{};
    cin >> number;

    int result = factorial(number);
    cout << "Factorial of " << number << " is " << result << endl;
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return n;
    return n * factorial(n - 1);
}