// Factorial number using loop

#include <iostream>

using std::cout;

size_t factorial(size_t &&n)
{
    size_t total{n};
    for (size_t i{1}; i < n; ++i)
        total *= (n - i);
    return total;
}

int main()
{
    cout << factorial(15) << "\n";
    return 0;
}