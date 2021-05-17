#include <iostream>

using std::cin;
using std::cout;
using std::endl;

inline int add_numbers(int a, int b);

inline int add_numbers(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add_numbers(177, 123) << endl;

    return 0;
}