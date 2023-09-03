#include <iostream>
using namespace std;

int main()
{
    // Example -1
    // int num{7};
    // while (num > 0)
    // {
    //     cout << num << ' ';
    //     --num;
    // }
    // cout << endl;

    // Example - 2
    size_t i{1};
    while (i <= 5)
    {
        cout << i << ' ';
        ++i;
    }
    cout << endl;

    // Example -3
    // int number{};
    // cout << "Enter an number less than 100: ";
    // cin >> number;
    // while (number >= 100)    //  !(number<100)
    // {
    //     cout << "Enter an number less than 100: ";
    //     cin >> number;
    // }
    // cout << "Out of program." << endl;

    // Example -4 using boolean flag.
    bool done{false};
    int number{};
    while (!done)
    {
        cout << "Enter an number between 1 and 5: ";
        cin >> number;
        if (number <= 1 || number >= 5)
            cout << "Out of range, Try again." << endl;
        else
        {
            cout << "Out of program." << endl;
            done = true;
        }
    }

    return 0;
}