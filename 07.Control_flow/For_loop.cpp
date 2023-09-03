#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Example -1
    // for (int i{1}; i <= 10; ++i)
    //     cout << i << endl;

    // Example -2
    // for (int i{1}; i <= 10; i += 2)
    //     cout << i << endl;

    // Example -3
    // for (int i{10}; i > 0; --i)
    //     cout << i << endl;
    // cout << "blastoff!" << endl;

    // Example -4
    // for (int i{10}; i <= 100; i += 10)
    // {
    //     if (i % 15 == 0)
    //         cout << i << endl;
    // }

    // Example -5
    // for (size_t i{1}, j{5}; i <= 5; ++i, ++j)
    //     cout << i << " + " << j << " = " << (i + j) << endl;

    // Example -6
    // for (int i{1}, j{2}, k{3}; i <= 5; ++i, ++j)
    //     cout << i << " * " << j << " * " << k << " = " << ((i * j) * k) << endl;

    // Example -7 - with simple if else statement
    // for (int i{1}; i <= 100; ++i)
    // {
    //     cout << i;
    //     if (i % 5 == 0)
    //         cout << endl;
    //     else
    //         cout << "\t";
    // }

    // Example -8 - with Ternary condition operator
    // for (int i{1}; i <= 100; ++i)
    //     cout << i << ((i % 5 == 0) ? "\n" : "\t");

    // Example -9 - with unsigned int because vector sizes can't be negative.
    // vector<int> nums{11, 32, 71, 15, 21};
    // for (unsigned i{}; i <= nums.size(); ++i)
    //     cout << nums.at(i) << endl;

    // Example -10
    vector<double> nums{11.1, 32.5, 71.2, 15.25, 21.50};
    for (double i{}; i < nums.size(); ++i)
        cout << nums.at(i) << endl;

    return 0;
}