#include <iostream>
using namespace std;

class leap_year
{
    int year;

public:
    int input();
    int calculation();
};

int leap_year::input()
{
    cout << "Enter the year you want to check: ";
    cin >> year;
    return 0;
}

int leap_year::calculation()
{
    if (year % 100 == 0)
        year = year / 100;
    else
        year = year % 100;
    cout << year << endl;
    if (year % 4 == 0)
        cout << "Leap Year" << endl;
    else
        cout << "Not Leap Year" << endl;
    return 0;
}

int main()
{
    leap_year l_Year;
    l_Year.input();
    l_Year.calculation();
    return 0;
}