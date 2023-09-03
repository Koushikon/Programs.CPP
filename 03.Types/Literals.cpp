/**
 * @file Literals.cpp
 * @author Koushik and from C++ Courses
 * @brief C++ Literals
 * @version 0.1
 * @date 2021-09-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int main()
{
    // Literal types as suffix:
    // u and l for unsigned and long.
    unsigned char unsigned_char{53u}; // Must be in that types range (0 - 255)

    float float_var{51.2F}; // or, 51.2f

    // std::cout << float_var << std::endl;

    // 2 Bytes - No extra literal type for short
    short short_var{-32678};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{777u}; // or, 777U

    // 4 Bytes
    const int int_var{55};
    signed signed_var{111};
    signed int signed_int{111};
    unsigned int unsigned_int{555U}; // or, 555u

    // Liteal type as prefix
    int dec_var{20};         // Default ad decimal
    int bin_var{0b00010100}; // as binary
    int oct_var{024};        // as Octal
    int oct_var2{024U};      // or, 024u
    int hex_var{0x14};       // as Hexa-decial
    int hex_var2{0x14u};     // or, 0x14U

    /*
    std::cout << dec_var << "\n"
              << bin_var << "\n"
              << oct_var << " " << oct_var2 << "\n"
              << hex_var << " " << hex_var2 << "\n"
              << std::endl;
    */

    // Grouping numbers: C++14 and beyond
    unsigned int prize{1'000'000u}; // or, 1'000'000U

    // std::cout << prize << std::endl;

    // 4 or 8 Bytes
    long long_var{88l}; // or, 88L
    long int long_int{93L};
    signed long signed_long{441};
    signed long int signed_long_int{441};
    unsigned long unsigned_long{441UL}; // or, 441ul

    // 8 Bytes
    long long long_long{88551ll}; // or, 88551LL
    long long int long_long_int{88551LL};
    signed long long signed_long_long{88551ll};
    unsigned long long unsigned_long_long{88551ULL}; // or, 88551ull

    return 0;
}
