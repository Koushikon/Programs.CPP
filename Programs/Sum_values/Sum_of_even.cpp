// Sum of n even numbers
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum_of_even{0};

    int max_no{}, start_digit{2};
    cout << "Enter A Number: ";
    cin >> max_no;

    // Sum of n even number using loop
    // for (int i = 0; i < max_no; ++i)
    // {
    //     sum_of_even += start_digit;
    //     start_digit += 2;
    // }

    // Sum of n even number using formula = Optimul one
    sum_of_even = (max_no * (2 * start_digit + (max_no - 1) * 2)) / 2;

    cout << "2+4+6+..= Sum of " << max_no << " even number = " << sum_of_even << endl;
    return 0;
}