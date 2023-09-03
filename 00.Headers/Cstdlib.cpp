/**
 * @file cstdlib.cpp
 * @author Koushik and from C++ Courses
 * @brief <cstdlib> header stuff
 * @version 0.1
 * @date 2021-11-27
 * @link https://en.cppreference.com/w/cpp/header/cstdlib @endlink
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num1{-5};
    long num2{-2371041};

    cout << " | " << num1 << " | = " << abs(num1) << '\n';
    cout << " | " << num2 << " | = " << abs(num2) << '\n';

    long int l_num1{-9999999L}, l_num2{10000000L};

    cout << " | " << l_num1 << " | = " << labs(l_num1) << '\n';
    cout << " | " << l_num2 << " | = " << labs(l_num2) << endl;

    return 0;
}