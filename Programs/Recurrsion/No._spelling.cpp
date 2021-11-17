/**
 * @file No._spelling.cpp
 * @author Koushik
 * @brief Number Spelling Recurrsion Program
 * @version 0.1
 * @date 2021-11-17
 * Time Complexity: O(number of digits), i.e. O(log n)
 * Space Complexity: O(n)
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string get_spelled(int full_num);
string spellings(const int &num);

int main()
{
    int number{};
    cout << "Enter the numebr: ";
    cin >> number;

    // Calling the method
    string no_in_words = get_spelled(number);
    cout << "The " << number << " in words is " << no_in_words << "." << endl;

    return 0;
}

string spellings(const int &num)
{
    switch (num)
    {
    case 0:
        return "Zero";
    case 1:
        return "One";
    case 2:
        return "Two";
    case 3:
        return "Three";
    case 4:
        return "Four";
    case 5:
        return "Five";
    case 6:
        return "Six";
    case 7:
        return "Seven";
    case 8:
        return "Eight";
    case 9:
        return "Nine";
    default:
        return "Invalid number.";
    }
}

string get_spelled(int full_num)
{
    int &&rem{full_num % 10};
    if (full_num <= 9)
        return spellings(full_num);
    full_num = std::floor(full_num / 10);
    return get_spelled(full_num) + " " + spellings(rem);
}