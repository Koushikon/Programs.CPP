#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Function prototype
int input();
double input(const string &msg);
void Percent_amount();
void Increment_percent();

// Constant Global variable
const float total_percent{100};

int main()
{
    char word{};
    do
    {
        cout << "\n= = = = = O = = = = =\nPercentage Calculator:\n\tTo Find Percentage Amount Press - 1\n\tTo Find Increase Amount Percentage Press - 2\n\tTo Exit Press - E or e\nEnter Your Choice: ";
        cin >> word;

        switch (word)
        {
        case '1':
            Percent_amount();
            break;

        case '2':
            Increment_percent();
            break;

        case 'e':
        case 'E':
            break;

        default:
            cout << "Wrong choice, Try again.\n";
            break;
        }

    } while (tolower(word) != 'e');

    return 0;
}

int input()
{
    int take{};
    cout << "Enter the Percentage Number: ";
    cin >> take;
    return take;
}

double input(const string &msg)
{
    double take{};
    cout << msg << ": ";
    cin >> take;
    return take;
}

void Percent_amount()
{
    int percent{};
    percent = input();

    double amount{};
    amount = input("Enter the Amount");

    double res{};
    res = amount * (percent / total_percent);
    cout << ' ' << percent << " percent of " << amount << " is " << res << endl;
}

void Increment_percent()
{
    double amount{};
    amount = input("Enter the Full Amount");

    double iamount{};
    iamount = input("Enter the Increment Amount");

    double res{};
    if (iamount < amount)
    {
        res = total_percent / (amount / iamount);
        cout << ' ' << iamount << " is the " << res << "% of increment of " << amount << endl;
    }
    else
        cout << " Increment Amount: " << iamount << " cannot be greater than Actual amount: " << amount << '\n';
}