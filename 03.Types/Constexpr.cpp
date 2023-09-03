/**
 * @file Constexpr.cpp
 * @author Koushik
 * @brief constexpr explaination C++ program (C++11 & C++14)
 * @version 0.1
 * @date 2021-11-14
 * @link https://en.cppreference.com/w/cpp/language/constexpr @endlink
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    /* 1 * * * * * * * * * * * * * * * * */

    constexpr int ball{5};
    constexpr double pi{3.14};
    constexpr char ch{'A'};
    constexpr bool flag{true};

    cout << "ball = " << ball << ", pi = " << pi << ", ch = " << ch << ", flag = " << flag << endl;

    /* 2 * * * * * * * * * * * * * * * * */

    int leg_count{2}; // Runtime variable
    // constexpr int arms{leg_count * 2}; // Compile ERROR: Cannot initialize with runtime variables
    cout << "Leg count " << leg_count << endl;

    /* 3 * * * * * * * * * * * * * * * * */

    const int total{2};          // Compile time constant
    constexpr int chairs{2 * 2}; // OK
    cout << "Total " << total << ", Chairs " << chairs << endl;

    /* 4 * * * * * * * * * * * * * * * * */

    constexpr int room_count = 2;
    constexpr int doors{room_count}; // It's also OK
    cout << "Rooms " << room_count << ", Doors " << doors << endl;

    return 0;
}