#include <iostream>
#include <iomanip>
using namespace std;

class percentage
{
public:
    char menu_input();
    double calculate_percentage();
};

char percentage::menu_input()
{
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
            calculate_percentage();
        }
        break;
        case 'q':
        case 'Q':
        {
            cout << "=====( ･_･ )=====" << endl;
            exit(0);
        }
        break;

        default:
            cout << "Unknown option, Try again..." << endl;
            break;
        }

    } while (selection != 'q' && selection != 'Q');
    return 0;
}

double percentage::calculate_percentage()
{
    double number{};
    cout << "\n\t⏰ Enter the amount: ";
    cin >> number;
    if (number < 0)
    {
        cout << "\t❌ It can't be a negative no, Try again" << endl;
        calculate_percentage();
    }
    else
    {
        double no_of_percentage{};
        do
        {
            cout << "\t⏰ Enter percentage between 1 to 100: ";
            cin >> no_of_percentage;
        } while (no_of_percentage < 1 || no_of_percentage > 100);

        double amount{(no_of_percentage / 100) * number};
        // amount = (no_of_percentage / 100) * number;
        cout << fixed << setprecision(2)
             << "\t✅ = " << no_of_percentage << " \% of " << number << " is: " << amount << endl;
    }

    // Another calculation
    char selection{};
    do
    {
        cout << "\tWould you like to calculate another one (Y/N): ";
        cin >> selection;
        if (selection == 'Y' || selection == 'y')
            calculate_percentage();
        else if (selection == 'N' || selection == 'n')
            menu_input();
        else if (selection == 'Q' || selection == 'q')
        {

            cout << "=====( ･_･ )=====" << endl;
            exit(0);
        }
        else
            cout << "\t\tUnknow character it should be (Y/N)." << endl;
    } while ((selection != 'N' && selection != 'n') || (selection != 'Y' && selection != 'y'));

    return 0;
}

int main()
{
    // Symbols - ✅ ✘ ❌ ⏰
    percentage percent;

    percent.menu_input();
    percent.calculate_percentage();

    return 0;
}