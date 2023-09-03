// Sum of n even numbers
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum_of_odd{0};

    int max_no{}, start_digit{1};
    cout << "Enter A Number: ";
    cin >> max_no;

    // Sum of n odd number using loop
    // for (int i = 0; i < max_no; ++i)
    // {
    //     sum_of_odd += start_digit;
    //     start_digit += 2;
    // }

    // Sum of n odd number using formula = Optimul one
    sum_of_odd = (max_no * (2 * start_digit + (max_no - 1) * 2)) / 2;

    cout << "Optimul Solution: Sum of " << max_no << " Odd natural number = " << sum_of_odd << endl;
    return 0;
}