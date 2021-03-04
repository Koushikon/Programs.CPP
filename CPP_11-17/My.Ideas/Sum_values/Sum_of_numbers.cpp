// Sum of 100 natural numbers
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum{0};

    // Sum of first 100 numbers using loop
    // int digit{1};
    // while (digit <= 100)
    // {
    //     sum = sum + digit;
    //     digit++;
    // }

    // Sum of first 100 numbers using formula = Optimul Solution
    int digit{100};
    sum = (digit * (digit + 1)) / 2;

    cout << "1+2+3+4+...100=" << sum << endl;
    return 0;
}
