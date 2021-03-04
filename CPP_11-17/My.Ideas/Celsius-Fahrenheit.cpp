// Celsius to Fahrenheit or Vise-versa Calculate
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int detect_celsius(int &celsius)
{
    cout << "\tChoose 0-For Celsius / 1-For Fahrenheit - ? ";
    cin >> celsius;

    if (celsius == 1 || celsius == 0)
        return celsius;
    else
    {
        detect_celsius(celsius);
        return 0;
    }
}

int main()
{
    double number{};
    cout << "Enter the number: ";
    cin >> number;

    int is_celsius{};
    cout << "\t" << number << " Number is in Celsius or Fahrenheit: " << endl;
    detect_celsius(is_celsius);

    float result{};
    if (is_celsius)
    {
        result = (number - 32) * .556;
        cout << setprecision(1) << fixed << "\t" << number << "°F = " << result << "°C" << endl;
    }
    else
    {
        result = (number * 1.80) + 32;
        cout << setprecision(1) << fixed << "\t" << number << "°C = " << result << "°F" << endl;
    }

    return 0;
}