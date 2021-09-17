// Assignment Operator
#include <iostream>
using namespace std;

int main() {

    int num1{200};
    int num2{100};

    cout << num1 << " " << num2 << endl;

    // Addition +=
    // num1 = num1 + num2;
    num1 += num2;
    cout << num1 << endl;

    // Substraction -=
    num1 = 200, num2 = 100;
    cout << num1 << " " << num2 << endl;
    // num1 = num1 - num2;
    num1 -= num2;
    cout << num1 << endl;

    // Multiplication *=
    num1 = 200, num2 = 100;
    cout << num1 << " " << num2 << endl;
    // num1 = num1 * num2;
    num1 *= num2;
    cout << num1 << endl;

    num1 = 10, num2 = 3;
    num1 *= 10 + num2;
    cout << num1 << endl;

    // Division /=
    num1 = 200, num2 = 100;
    cout << num1 << " " << num2 << endl;
    // num1 = num1 / num2;
    num1 /= num2;
    cout << num1 << endl;

    // Oposite Division /=
    num1 = 200, num2 = 100;
    cout << num1 << " " << num2 << endl;
    // num2 = num2 / num1;
    num2 /= num1;
    cout << num2 << endl;

    // Modulation or Reminder %=
    num1 = 200, num2 = 98;
    cout << num1 << " " << num2 << endl;
    // num1 = num1 % num2;
    num1 %= num2;
    cout << num1 << endl;

    // Modulation with another value
    num1 = 10, num2 = 3;
    cout << num1 << " " << num2 << endl;
    // num1 = num1 % num2;
    num1 %= num2;
    cout << num1 << endl;

    return 0;
}