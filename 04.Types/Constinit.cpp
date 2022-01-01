/**
 * @file Constinit.cpp
 * @author Koushik
 * @brief constinit explain C++ program (C++20)
 * @version 0.1
 * @date 2021-11-14
 * @link https://en.cppreference.com/w/cpp/language/constinit @endlink
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using std::cout;
using std::endl;

/* 1 * * * * * * * * * * * * * * * * */

const int val1{33};
constexpr int val2{34};
int val3{35};

/* 2 * * * * * * * * * * * * * * * * */

constinit int age = 88;
const constinit int age1{val1};

/* 3 * * * * * * * * * * * * * * * * */

// constinit int age5{age}; // Initializing with age would lead to Compiler error
constinit int age2{age1}; // age is not const

/* 4 * * * * * * * * * * * * * * * * */

// constinit int age3{val3}; // Error: val3 is evaluated at run time. So, Can't initialize with age3

const constinit double weight{33.33 * 2};

/* 5 * * * * * * * * * * * * * * * * */

const constexpr double height{22.22 * 3}; // constexpr is alreary const So there's no need to use const here.
constexpr double height2{22.22 * 3};

/* 6 * * * * * * * * * * * * * * * * */

// constexpr constinit double area{3.11}; // Can't combine both constexpr and constinit.

int main()
{
    cout << val1 << " - " << val2 << " - " << val3 << endl;

    cout << age << " - " << age1 << " - " << age2 << endl;

    cout << weight << " - " << height << " - " << height2 << endl;

    // height2 = 5; // Can't support re-assignment of constexpr variable.
    // cout << height2 << endl;

    age2 = 71; // Support runtime re-assignment of constinit variables
    cout << age2 << endl;

    return 0;
}