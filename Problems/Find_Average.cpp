#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double first{}, second{}, third{};
    cout << "Enter First, Second, Third number respectively: ";
    cin >> first >> second >> third;

    if (first >= 0 && second >= 0 && third >= 0)
    {
        double sum_of_3{}, average_of_3{};
        sum_of_3 = first + second + third;
        average_of_3 = sum_of_3 / 3;
        cout << "The Sum of " << first
             << " , " << second
             << " & " << third
             << " is - " << sum_of_3 << " and The Average is - " << average_of_3;
    }

    return 0;
}