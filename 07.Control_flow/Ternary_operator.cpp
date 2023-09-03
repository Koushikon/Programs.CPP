#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a{35}, b{20};

    /**
     * * Ternary Operator:
     * @details condition? (true) : (false);
     */

    auto first{a > b ? a : 7};
    cout << first << '\t' << typeid(first).name() << '\n';

    auto second = a < b ? a : 22.4f;
    cout << second << '\t' << typeid(second).name() << '\n';

    return 0;
}