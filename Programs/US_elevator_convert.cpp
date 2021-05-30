// US to Europian floor conversion and vise versa.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void display_menu();
char enter_menu();

void us_to_eu_elevator(int &flr);
void eu_to_us_elevator(int &flr);
void leave();
void default_selection();

char enter_menu()
{
    char menu{};
    cin >> menu;
    return toupper(menu);
}

void display_menu()
{
    cout << "\n\n==========================" << endl
         << "| Press," << endl
         << "|\tU-- >> To convert 'US -> EU' elevator." << endl
         << "|\tE -->> To convert 'EU -> US' elevator." << endl
         << "|\tQ -->> To quit." << endl
         << "| \tSo, What's your choice? ";
}

int main()
{
    char choice{};

    do
    {
        display_menu();
        choice = enter_menu();

        int floor{};
        switch (choice)
        {
        case 'U':
            us_to_eu_elevator(floor);
            break;

        case 'E':
            eu_to_us_elevator(floor);
            break;

        case 'Q':
            leave();
            break;

        default:
            default_selection();
            break;
        }
    } while (choice != 'Q');

    int euElevator{};

    cout << "Enter the ";
    return 0;
}

void us_to_eu_elevator(int &flr)
{

    cout << "Enter the United State floor No. - ";
    cin >> flr;
    cout << "The US floor " << flr << " equivalent Europian floor is " << (flr - 1) << endl;
}

void eu_to_us_elevator(int &flr)
{
    cout << "Enter the Europian floor No. - ";
    cin >> flr;
    cout << "The EU floor " << flr << " equivalent United State floor is " << (flr + 1) << endl;
}

void leave()
{
    cout << "\tGood bye..." << endl;
}

void default_selection()
{
    cout << "\tUnknown selection, Please try again.";
}