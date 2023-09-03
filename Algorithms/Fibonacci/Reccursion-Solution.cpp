#include <iostream>

using std::cin;
using std::cout;

/*
 * Fibonacci implementation with Reccursion
 */

long long int fibonacci(long long int num);

int main()
{
    long long int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << number << "th Position of fibonacci number is: " << fibonacci(number);

    return 0;
}

long long int fibonacci(long long int num)
{
    if (num <= 1)
        return num;
    else
        return (fibonacci(num - 1) + fibonacci(num - 2));
}