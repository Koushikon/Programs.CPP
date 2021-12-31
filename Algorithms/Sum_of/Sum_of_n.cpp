// Sum of 100 natural numbers

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum{0};

    // Sum of first 100 numbers using loop
    int digit{1};
    while (digit <= 100)
    {
        sum = sum + digit;
        digit++;
    }
    cout << "Loop Solution: 1 + 2 + 3 + 4 + ... + 100 = " << sum << endl;

    // Sum of first 100 numbers using formula = Optimul Solution
    int digit_2{100};
    sum = (digit_2 * (digit_2 + 1)) / 2;
    cout << "Optimul Solution: 1 + 2 + 3 + 4 + ... + 100 = " << sum << endl;

    return 0;
}
