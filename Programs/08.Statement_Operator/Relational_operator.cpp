#include <iostream>
using namespace std;

int main()
{
    int num1{}, num2{};
    cout << "Enter 2 Integers: ";
    cin >> num1 >> num2;

    cout << boolalpha;
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    const int lower{10}, upper{20};

    cout << "\nEnter an integer that is greater than " << lower << " : ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

    cout << "\nEnter an integer that is less than " << upper << " : ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;
    cout << noboolalpha;

    return 0;
}