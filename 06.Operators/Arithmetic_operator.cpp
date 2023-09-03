// Arithmetic Operator
#include <iostream>
using namespace std;

int main()
{
    int num1{200};
    int num2{100};
    int result{0};

    // Addition
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    // Substraction
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    // Multiplication
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    // Division
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    // Oposite Division
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;

    // Modulation or Reminder
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    // Modulation with another value
    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    result = num1 * 10 + num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    cout << 5 / 10 << endl
         << 5.0 / 10.0 << endl;

    return 0;
}