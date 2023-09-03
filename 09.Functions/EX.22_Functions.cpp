#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

int main()
{
    double fahrenheit_temperature{89};
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----

    double celsius_temperature{fahrenheit_to_celsius(fahrenheit_temperature)};
    double kelvin_temperature{fahrenheit_to_kelvin(fahrenheit_temperature)};

    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";

    return 0;
}

double fahrenheit_to_celsius(double temperature)
{
    return std::round(((temperature - 32) * 5.0) / 9.0);
}

double fahrenheit_to_kelvin(double temperature)
{
    return std::round(((temperature - 32) * 5.0) / 9.0 + 273);
}