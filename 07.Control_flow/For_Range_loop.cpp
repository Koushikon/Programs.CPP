#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Example -1 - with specific data type.
    for (int i : {10, 11, 35, 41})
        cout << i << ' ';
    cout << endl;

    // Example -2 - with auto keyword that automatically detect values data type.
    int scores[]{10, 11, 35, 41};
    for (auto &i : scores)
        cout << i << ' ';
    cout << endl;

    // Example -3
    // vector<double> temperatures{87.9, 77.6, 80.01, 57.3};
    // double average_temp{}, total{};
    // for (auto temp : temperatures)
    //     total += temp;
    // if (temperatures.size() != 0)
    //     average_temp = total / temperatures.size();
    // cout << "The average temp is without setprecision(): " << average_temp << endl
    //      << fixed << setprecision(3)
    //      << "The average temp is with setprecision(): " << average_temp << endl;

    // Example -4
    // for (auto val : {1, 2, 5, 7, 3})
    //     cout << val << endl;

    // Example -5
    for (auto c : "This is my name.")
    {
        cout << ((c == ' ') ? '_' : c);
    }
    cout << '\n';

    /**
     * * Range for loop with initializer condition.
     * * This variables Scope is the For loop's Scope.
     * * Its Available in C++20.
     */
    for (int multiplyer{5}; int i : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        cout << (i * multiplyer) << ' ';
    }
    cout << '\n';

    for (auto word{"Foo"}; auto c : {'d', 'l', 's'})
    {
        cout << word << c << ' ';
    }
    cout << '\n';

    return 0;
}