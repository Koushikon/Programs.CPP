#include <iostream>
#include <iomanip>
using namespace std;

/**
 * * C++ program to demonstrate Basic Euclidean Algorithm
 */

// Function Prototype
int recc_gcd(int a, int b);
int loop_gcd(int a, int b);
void display(int &a, int &b);

int main()
{
    int a{10}, b{15};
    display(a, b);

    a = 35, b = 10;
    display(a, b);

    a = 31, b = 2;
    display(a, b);

    a = 26, b = 22;
    display(a, b);

    a = 128, b = 96;
    display(a, b);
    a = 96, b = 128;
    display(a, b);
    return 0;
}

int recc_gcd(int a, int b)
{
    /**
     * * Recurrsion Approach
     */
    if (a == 0)
        return b;
    return recc_gcd(b % a, a);
}

int loop_gcd(int a, int b)
{
    int r{};
    while ((b % a) > 0)
    {
        r = b % a;
        b = a;
        a = r;
    }
    return a;
}

void display(int &a, int &b)
{
    int res1{recc_gcd(a, b)}, res2{loop_gcd(a, b)};
    cout << "GCD(" << a << ", " << b << ") = " << res1
         << " | GCD(" << a << ", " << b << ") = " << res2
         << " | Same: " << (res1 == res2) << endl;
}