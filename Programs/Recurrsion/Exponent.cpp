/**
 * @file Exponent.cpp
 * @author Koushik
 * @brief Exponent of number Program
 * @version 0.1
 * @date 2021-11-17
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_exponent(int num, int pow);

int main()
{
    int number{}, power{};

    cout << "Enter the numebr: ";
    cin >> number;

    cout << "Enter the numebr: ";
    cin >> power;

    int val = get_exponent(number, power);
    cout << number << " exponent " << power << " is " << val << "." << endl;

    return 0;
}

int get_exponent(int num, int pow)
{
    if (pow <= 1)
        return num;
    return num * get_exponent(num, pow - 1);
}