/**
 * @file Fibonacci.cpp
 * @author Koushik
 * @brief Fibonacci elements with recurrsion
 * @version 0.1
 * @date 2021-11-11
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_fibonacci(int n);

int main()
{
    int number{};
    cout << "Enter the number: ";
    cin >> number;

    int position{get_fibonacci(number)};
    cout << "the " << number << "th fibonacci number is " << position << endl;

    return 0;
}

int get_fibonacci(int n)
{
    if (n <= 1)
        return n;
    return get_fibonacci(n - 1) + get_fibonacci(n - 2);
}