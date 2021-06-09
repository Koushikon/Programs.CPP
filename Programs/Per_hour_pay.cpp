// PY Assignment in C++
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int hours{};
    double rate{};

    cout << "Enter the hour? ";
    cin >> hours;
    cout << "Enter rate of per hour? ";
    cin >> rate;

    double total_rate{}, normal_hour{40.0};

    if (hours <= normal_hour)
        total_rate = static_cast<double>(hours) * rate;
    else
    {
        total_rate = ((hours - normal_hour) * 1.5) * rate;
        total_rate = (normal_hour * rate) + total_rate;
    }

    cout << "Pay: " << total_rate << endl;

    return 0;
}