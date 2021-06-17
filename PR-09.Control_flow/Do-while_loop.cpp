#include <iostream>
using namespace std;

int main()
{
    // Example -1 - Much more cleaner way to repeat compared to while loop.
    // int number{};
    // do
    // {
    //     cout << "Enter a number between 1 and 5: ";
    //     cin >> number;
    // } while (number <= 1 || number >= 5);
    // cout << "Our of program." << endl;

    // Example -2
    char selection{};
    do
    {
        cout << "\n=============================" << endl
             << "Press 1 -For do this" << endl
             << "Press 2 -For do that" << endl
             << "Press 3 -For do something" << endl
             << "Press Q -For quit." << endl
             << "Enter your choice: ";
        cin >> selection;

        if (selection == '1')
            cout << "Your choice - doing this." << endl;
        else if (selection == '2')
            cout << "Your choice - doing that." << endl;
        else if (selection == '3')
            cout << "Your choice - do something." << endl;
        else if (selection == 'Q' || selection == 'q')
            cout << "Good bye." << endl;
        else
            cout << "Unknown option, Try again." << endl;
    } while (selection != 'q' && selection != 'Q');

    return 0;
}