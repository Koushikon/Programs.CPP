#include <iostream>
using namespace std;

int main()
{
    bool equal_result{false}, no_equal_result{false};
    int num1{}, num2{};

    // Starting Boolalpha
    cout << boolalpha;

    // Example - 1
    cout << "\nEnter 2 integers: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    no_equal_result = (num1 != num2);
    cout << "Result of Equal: " << equal_result << endl
         << "Result of Not Equal: " << no_equal_result << endl;

    // Example - 2
    char char1{}, char2{};
    cout << "\nEnter 2 characters: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    no_equal_result = (char1 != char2);
    cout << "Result of Equal: " << equal_result << endl
         << "Result of Not Equal: " << no_equal_result << endl;

    // Example - 3
    double double1{}, double2{};
    cout << "\nEnter 2 doubles: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    no_equal_result = (double1 != double2);
    cout << "Result of Equal: " << equal_result << endl
         << "Result of Not Equal: " << no_equal_result << endl;

    // Example - 4
    cout << "\nEnter 1 integer and 1 double: ";
    cin >> num1 >> double2;
    equal_result = (num1 == double2);
    no_equal_result = (num1 != double2);
    cout << "Result of Equal: " << equal_result << endl
         << "Result of Not Equal: " << no_equal_result << endl;

    cout << noboolalpha;
    // Ending Boolalpha

    return 0;
}