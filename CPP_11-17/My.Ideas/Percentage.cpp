#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    // vector<double> number{};
    // Symbols - ✅ ✘ ❌ ⏰
    char selection{};

    do
    {
        cout << "\n=============================" << endl
             << "Press 1 -> For Calculating Percentage." << endl
             << "Press Q -> To quit." << endl
             << "Enter your choice: ";
        cin >> selection;

        switch (selection)
        {
        case '1':
        {
            double number{};
            cout << "\n\t⏰ Enter the amount: ";
            cin >> number;
            if (number < 0)
            {
                cout << "❌ It can't be a negative no, Try again" << endl;
                continue;
            }
            else
            {
                double no_of_percentage{};
                do
                {
                    cout << "\t⏰ Enter percentage between 1 to 100: ";
                    cin >> no_of_percentage;
                } while (no_of_percentage < 1 || no_of_percentage > 100);

                double amount{};
                amount = (no_of_percentage / 100) * number;
                cout << fixed << setprecision(2)
                     << "\t= " << no_of_percentage << " \% of " << number << " is: " << amount << endl;
            }
        }
        break;
        case 'q':
        case 'Q':
            cout << "=====( ･_･ )=====" << endl;
            break;

        default:
            cout << "Unknown option, Try again..." << endl;
            break;
        }

    } while (selection != 'q' && selection != 'Q');
    return 0;
}