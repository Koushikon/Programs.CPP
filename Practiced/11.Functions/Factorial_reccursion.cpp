#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    unsigned long long number{};
    cin >> number;
    cout << factorial(number) << endl;
    return 0;
}