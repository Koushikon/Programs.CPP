/**
 * @file Counting.cpp
 * @author Koushik
 * @brief Counting and Reverse Counting Program
 * @version 0.1
 * @date 2021-11-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void get_counting(int n);
void rev_get_counting(int n);

int main()
{
    int number{};
    cout << "Enter the numer: ";
    cin >> number;

    get_counting(number);
    cout << endl;
    rev_get_counting(number);
    cout << endl;
    return 0;
}

// Counting process
void get_counting(int n)
{
    if (n <= 0)
        return;

    cout << n << " ";
    get_counting(n - 1);
}

// Reverse Counting process
void rev_get_counting(int n)
{
    if (n <= 0)
        return;

    rev_get_counting(n - 1);
    cout << n << " ";
}