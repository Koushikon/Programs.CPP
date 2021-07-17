#include <iostream>
using namespace std;

int main()
{
    // Example -1
    // int num{};
    // cout << "Enter a positive number  -Start the countdown: ";
    // cin >> num;
    // while (num > 0)
    // {
    //     cout << num << endl;
    //     --num;
    // }

    // Example -2
    // int num{};
    // cout << "Enter a positive number to count upto: ";
    // cin >> num;
    // int i{1};
    // while (num >= i)
    // {
    //     cout << i << endl;
    //     ++i;
    // }

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