/**
 * @file Implicit_conversion.cpp
 * @author Koushik
 * @brief C++ Implicit conversions program
 * bool -> char -> short int -> int -> unsigned int -> long -> long long -> float -> double -> long double
 * @version 0.1
 * @date 2024-04-21
 * @link https://en.cppreference.com/w/cpp/language/implicit_conversion @endlink
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

int main()
{
    // bool --> char
    bool isPricy = true;
    char isPricyChar = isPricy;

    std::cout << "isPricy bool: " << isPricy << std::endl;
    std::cout << "isPricy bool to char: " << (int)isPricyChar << std::endl;

    // char --> short int
    isPricyChar = 'G';
    short int isPricyShortInt = isPricyChar;

    std::cout << "isPricy char: " << isPricyChar << std::endl;
    std::cout << "isPricy char to short int: " << (short int)isPricyShortInt << std::endl;

    // short int --> int
    isPricyShortInt = -32768;
    int isPricyInt = isPricyShortInt;

    std::cout << "isPricy short int: " << isPricyShortInt << std::endl;
    std::cout << "isPricy short int to int: " << isPricyInt << std::endl;

    // int --> unsigned int
    isPricyInt = -2147483648;
    unsigned int isPricyUnsignedInt = isPricyInt;

    std::cout << "isPricy int: " << isPricyInt << std::endl;
    std::cout << "isPricy int to unsigned int: " << isPricyUnsignedInt << std::endl;
    std::cout << "-5 to unsigned int: " << (unsigned int)-5 << std::endl;

    // unsigned int --> long
    isPricyUnsignedInt = 4294967290;
    long isPricyLong = isPricyUnsignedInt;

    std::cout << "isPricy unsigned int: " << isPricyUnsignedInt << std::endl;
    std::cout << "isPricy unsigned int to long: " << isPricyLong << std::endl;

    // long --> unsigned long
    isPricyLong = -5;
    unsigned long isPricyUnsignedLong = isPricyLong;

    std::cout << "isPricy long: " << isPricyLong << std::endl;
    std::cout << "isPricy long to unsigned long: " << isPricyUnsignedLong << std::endl;

    // unsigned long --> long long
    isPricyUnsignedLong = 4294967291;
    long long isPricyLongLong = isPricyUnsignedLong;

    std::cout << "isPricy unsigned long: " << isPricyUnsignedLong << std::endl;
    std::cout << "isPricy unsigned long to unsigned long long: " << isPricyLongLong << std::endl;

    // long long --> float (4)
    isPricyLongLong = 9223372036854775800;
    float isPricyFloat = isPricyLongLong;

    std::cout << "isPricy long long: " << isPricyLongLong << std::endl;
    std::cout << "isPricy long long to float: " << isPricyFloat << std::endl;

    // float (4) --> double (8)
    isPricyFloat = 9.22337e+18f;
    double isPricyDouble = isPricyFloat;

    std::cout << "isPricy float: " << isPricyFloat << std::endl;
    std::cout << "isPricy float to double: " << isPricyDouble << std::endl;

    // double (8) --> long double (16)
    isPricyDouble = 18446744073709551.05;
    long double isPricyLongDouble = isPricyDouble;

    std::cout << "isPricy double: " << isPricyDouble << std::endl;
    std::cout << "isPricy double to long double: " << isPricyLongDouble << std::endl;

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