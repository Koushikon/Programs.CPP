/**
 * @file Implicit_conversion.cpp
 * @author Koushik
 * @brief C++ Implicit conversions program
 * @version 0.1
 * @date 2021-11-14
 * @link https://en.cppreference.com/w/cpp/language/implicit_conversion @endlink
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int main()
{
    /* 1 * * * * * * */
    double price{45.6};
    int units{10};

    double total{price * units};

    std::cout << "Total: " << total << std::endl;
    std::cout << "Size of Total: " << sizeof(total) << "bytes" << std::endl;

    /* 2 * * * * * * */
    int x{};
    double y{45.4};

    x = y; // Narrowing conversion
    std::cout << "The value of x is: " << x << std::endl;

    return 0;
}