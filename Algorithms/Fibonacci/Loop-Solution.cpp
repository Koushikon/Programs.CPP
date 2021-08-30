#include <iostream>

using std::cin;
using std::cout;

/*
 * Fibonacci implementation with Looping
 */

int main()
{
    int number{};

    cout << "Enter the number: ";
    cin >> number;

    int counter{1};
    long long int f1{0}, f2{1}, fn;
    while (counter < number)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        counter++;
    }
    cout << number << "th Position of fibonacci number is: " << fn << '\n';
}