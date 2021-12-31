/**
 * @file Exponent_of-2.cpp
 * @author Koushik
 * @brief 2's Exponent Program
 * @version 0.1
 * @date 2021-11-17
 * Time Complexity: O(log n)
 * Space Complexity: O(n)
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int get_2_exponent(int num);

int main()
{
    int power{};

    cout << "Enter the 2 Exponent numebr: ";
    cin >> power;

    int val = get_2_exponent(power);
    cout << "2's exponent " << power << " is " << val << "." << endl;

    return 0;
}

int get_2_exponent(int num)
{
    if (num == 0)
        return 1;
    int small_answer = get_2_exponent(num / 2);
    if (num & 1)
        return small_answer * small_answer * 2;
    else
        return small_answer * small_answer;
}