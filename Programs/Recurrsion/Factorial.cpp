/**
 * @file Factorial.cpp
 * @author Koushik
 * @brief Factorial calculation with Recurrsion
 * @version 0.1
 * @date 2021-11-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_factorial(int n);

int main()
{
    int number{};

    cout << "Enter the number: ";
    cin >> number;

    int factorial{get_factorial(number)};
    cout << "The " << number << "'s factorial is " << factorial << endl;

    return 0;
}

int get_factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * get_factorial(n - 1);
}