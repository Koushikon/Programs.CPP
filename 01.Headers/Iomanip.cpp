/**
 * @file Iomanip.cpp
 * @author Koushik and from C++ Courses
 * @brief <iomanip> header stuff
 * @link https://en.cppreference.com/w/cpp/io/manip @endlink
 * @version 0.1
 * @date 2021-09-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <iomanip>
#include <sstream> // For istringstream

int main()
{
    /**
     * @brief Insert a new line at the end
     * 
     */
    std::cout << "--------------" << std::endl;
    std::cout << "\tAWSAM" << std::endl;
    std::cout << "--------------" << std::endl;

    std::cout << "Back to Home\n"
              << "--------------\n"
              << std::flush; // Same as before example i think

    /**
     * @brief std::setw(n) in Action
     * 
     */
    std::cout << "\nUnformatted table: " << std::endl;
    std::cout << "Daniel"
              << " "
              << "Gray" << 35 << std::endl;
    std::cout << "Jordan"
              << " "
              << "Woods" << 65 << std::endl;

    std::cout << "\nFormatted table: " << std::endl;
    std::cout << std::setw(10) << "Lastname"
              << std::setw(10) << "Firstname" << std::setw(10) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel"
              << std::setw(10) << "Gray" << std::setw(10) << 35 << std::endl;
    std::cout << std::setw(10) << "Jordan"
              << std::setw(10) << "Woods" << std::setw(10) << 65 << std::endl;

    /**
     * @brief setw(n) with input string tream
     * 
     */
    std::istringstream is("hello, world");
    char arr[10];
    is >> std::setw(6) >> arr;
    std::cout << "\nInput from " << is.str() << " with setw(6) gave "
              << arr << std::endl;

    /**
     * @brief std::internal or std::left or std::right
     * 
     */
    std::cout << "\nInternal Justified or Allignment: " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -124.6 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -124.6 << std::endl;

    /**
     * @brief  std::setfill() with std::setw(n)
     * 
     */
    std::cout << "\nGood "
              << "Buy" << std::endl;
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << "Good" << std::setw(10) << "Buy" << std::endl;

    /**
     * @brief std::boolalpha, std::noboolalpha
     * 
     */
    bool vs1{true};
    bool vs2{false};

    std::cout << std::endl;

    std::cout << vs1 << " and " << vs2 << std::endl;

    std::cout << std::boolalpha;
    std::cout << vs1 << " and " << vs2 << std::endl;

    std::cout << std::noboolalpha;
    std::cout << vs1 << " and " << vs2 << std::endl;

    /**
     * @brief std::showpos, std::noshowpos
     * 
     */
    int pos_a{7171}, pos_b{-4130};

    std::cout << std::endl;

    std::cout << pos_a << " " << pos_b << std::endl;

    std::cout << std::showpos;
    std::cout << pos_a << " " << pos_b << std::endl;

    std::cout << std::noshowpos;
    std::cout << pos_a << " " << pos_b << std::endl;

    /**
     * @brief std::dec, std::oct, std::hex
     * 
     */
    std::cout << "\nDecimal || Octal || Hexa-decimal" << std::endl;

    int a{49};
    std::cout << "\n49 in decimal:\t" << std::dec << a;
    std::cout << "\n49 in decimal:\t" << std::oct << a;
    std::cout << "\n49 in decimal:\t" << std::hex << a << std::endl;

    int b{-49};
    std::cout << "\n-49 in decimal:\t" << std::dec << b;
    std::cout << "\n-49 in decimal:\t" << std::oct << b;
    std::cout << "\n-49 in decimal:\t" << std::hex << b << std::endl;

    double c{49.6};
    std::cout << "\n49.6 in decimal:\t" << std::dec << c;
    std::cout << "\n49.6 in decimal:\t" << std::oct << c;
    std::cout << "\n49.6 in decimal:\t" << std::hex << c << std::endl;

    /**
     * @brief std::showbase, std::noshowbase
     * 
     */
    int pos_int{717171};

    std::cout << std::endl;

    std::cout << std::dec << pos_int << std::endl
              << std::oct << pos_int << std::endl
              << std::hex << pos_int << std::endl;

    std::cout << std::showbase;
    std::cout << std::dec << pos_int << std::endl
              << std::oct << pos_int << std::endl
              << std::hex << pos_int << std::endl;
    std::cout << std::noshowbase;

    /**
     * @brief std::uppercase, std::nouppercase
     * 
     */
    std::cout << std::endl;

    std::cout << std::hex << std::showbase
              << "0x2a in uppercase: " << std::uppercase << 0x2a << "\nin nouppercase: " << std::nouppercase << 0x2a << std::endl;

    std::cout << "1e-10 in uppercase: " << std::uppercase << 1e-10
              << "\nin nouppercase: " << std::nouppercase << 1e-10 << std::endl;

    /**
     * @brief std::scientific, std::fixed
     * 
     */
    double num1{3.1415926535897932384626};
    double num2{2006.0};
    double num3{1.34e-10};

    std::cout << "\nnum1: " << num1 << std::endl
              << "num2: " << num2 << std::endl
              << "num3: " << num3 << std::endl;

    std::cout << std::fixed
              << "\nnum1: " << num1 << std::endl
              << "num2: " << num2 << std::endl
              << "num3: " << num3 << std::endl;

    std::cout << std::scientific
              << "\nnum1: " << num1 << std::endl
              << "num2: " << num2 << std::endl
              << "num3: " << num3 << std::endl;

    std::cout << "\ndouble values (back to defaults)" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "num1: " << num1 << std::endl
              << "num2: " << num2 << std::endl
              << "num3: " << num3 << std::endl;

    /**
     * @brief std::setprecision(n)
     * 
     */
    double num4{3.1415926535897932384626};

    std::cout << "\nnum4: " << num4 << std::endl;
    std::cout << std::setprecision(5)
              << "num4: " << num4 << std::endl;
    std::cout << std::setprecision(12)
              << "num4: " << num4 << std::endl;

    /**
     * @brief std::showpoint, std::noshowpoint
     * 
     */
    double num5{34.1};
    double num6{101.990};
    double num7{12.0};
    double num8{45};

    std::cout << "\nnum5: " << num5 << std::endl
              << "num6: " << num6 << std::endl
              << "num7: " << num7 << std::endl
              << "num8: " << num8 << std::endl;

    std::cout << std::showpoint; // Shows even if its a 0
    std::cout << "\nnum5: " << num5 << std::endl
              << "num6: " << num6 << std::endl
              << "num7: " << num7 << std::endl
              << "num8: " << num8 << std::endl;

    return 0;
}