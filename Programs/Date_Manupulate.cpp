#include <iostream>

using std::cout;
using std::endl;

/**
 * * Panja's Creation
 */

int main()
{
    int a{4}, b{7}, c{1998};
    // std::cin >> a >> b >> c;

    a *= 100;
    a += b;

    cout << a << " " << std::abs(c - a) << endl;

    return 0;
}