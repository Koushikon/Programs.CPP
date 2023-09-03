// Pointer
#include <iostream>
#include <cstdlib>

using std::abs;
using std::cin;
using std::cout;
using std::endl;

void sum_sub();

/**
 * @brief To Print the Addition and Difference
 * 
 * @param sum   a
 * @param sub   b
 * 
 * @note:
 * This function also needs <cstdlib> library
 * abs() Parameters:
 * x: An integral value whose absolute value is returned.
 * abs() Return value:
 * The abs(x) function returns the absolute value of x i.e. |x|
 */

void sum_sub(int *sum, int *sub)
{
    int Addition{*sum + *sub}, diff{*sum - *sub};
    cout << Addition << endl
         << abs(diff) << endl;
}

int main()
{
    int a{}, b{};
    cin >> a >> b;

    sum_sub(&a, &b);
    return 0;
}