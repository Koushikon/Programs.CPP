// Factorial number using reccursion

#include <iostream>

using std::cout;

size_t factorial(size_t &&n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout << factorial(15) << "\n";
    return 0;
}