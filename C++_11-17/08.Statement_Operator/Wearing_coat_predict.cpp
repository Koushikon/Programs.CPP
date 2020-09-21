#include <iostream>
using namespace std;

int main()
{
    bool wear_coat{false};
    int wind_speed{};
    double temperature{};
    const int wind_speed_for_coat{25};
    const double temperature_for_coat{45};

    cout << "Enter the current temperature in [F]: ";
    cin >> temperature;
    cout << "Enter wind speed in [MPH]: ";
    cin >> wind_speed;

    cout << boolalpha;
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "With or, Do you need to wear a coat - " << wear_coat << endl;

    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "With and, Do you need to wear a coat - " << wear_coat << endl;
    cout << noboolalpha;

    return 0;
}