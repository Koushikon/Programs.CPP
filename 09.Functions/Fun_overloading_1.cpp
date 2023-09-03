// With diifferent type of Parameters and function type

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int add_numbers(int num1, int num2);
double add_numbers(double num1, double num2);

int get_value(int num1 = 70);
double get_value(double num2 = 65.5);

int add_numbers(int num1, int num2)
{
    return num1 + num2;
}

double add_numbers(double num1, double num2)
{
    return num1 + num2;
}

int main()
{
    cout << "Int Fuunction: " << add_numbers(151, 149) << endl;

    // You can't pass arguments like this 205, Compiler will give you an Error.
    // Solution: 205.0
    // cout << "Double Fuunction: " << add_numbers(15.5, 205) << endl;

    cout << "Double Fuunction: " << add_numbers(15.5, 205.6) << endl;

    // Return type is not considered without passing the a value, This will give an Error.
    // cout << get_value() << endl;

    cout << get_value(100) << endl;
    cout << get_value(98.7) << endl;

    return 0;
}

int get_value(int num1)
{
    return num1;
}

double get_value(double num2)
{
    return num2;
}