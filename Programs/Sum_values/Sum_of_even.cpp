#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num{};
    cout << "Enter A Number: ";
    cin >> num;

    /*
     * Sum of even natural numbers
     * 2 + 4 + 6 + 8 + ... + n  
    */

    // Sum of n even number using loop
    {
        int sum_of_even{0}, even{2};
        for (int i = 0; i < num; ++i)
        {
            sum_of_even += even;
            even += 2;
        }
        cout << "Loop Solution: Sum of " << num << " Even natural number = " << sum_of_even << endl;
    }

    // Sum of n even number using formula = Optimul one
    int sum_of_even{0}, even{2};
    sum_of_even = (num * (2 * even + (num - 1) * 2)) / 2;
    cout << "Optimul Solution: Sum of " << num << " Even natural number = " << sum_of_even << endl;

    return 0;
}