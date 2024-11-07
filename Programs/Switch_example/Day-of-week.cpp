#include <iostream>

using namespace std;

/**
 * Logic to print day of week name using
 * ex. 1 for Monday, 2 for Tuesday and 7 for Sunday
 *
 * 1) Take the day of week input
 * 2) Check if the given value is 1 to 7 or default
 * 3) Print according day message
 * 4) End of program
 */

int main()
{
    int day_of_week{};
    cout << "Enter the day of week: ";
    cin >> day_of_week;

    switch (day_of_week)
    {
    case 1:
        cout << "Its Monday" << endl;
        break;
    case 2:
        cout << "Its Tuesday" << endl;
        break;
    case 3:
        cout << "Its Wednesday" << endl;
        break;
    case 4:
        cout << "Its Thursday" << endl;
        break;
    case 5:
        cout << "Its Friday" << endl;
        break;
    case 6:
        cout << "Its Saturday" << endl;
        break;
    case 7:
        cout << "Its Sunday" << endl;
        break;
    default:
        cout << "Invalid work number" << endl;
        break;
    }
}