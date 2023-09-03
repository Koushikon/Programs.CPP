#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned long long fibonacci(unsigned long long n);

unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    // unsigned long long number{};
    // cin >> number;
    cout << fibonacci(8) << endl;
    return 0;
}