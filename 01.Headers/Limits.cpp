/**
 * @file Limits.cpp
 * @author Koushik and from C++ Courses
 * @brief <limits> header stuff
 * @link https://en.cppreference.com/w/cpp/types/numeric_limits @endlink
 * @version 0.1
 * @date 2021-09-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <limits>

int main()
{
    // For Boolean
    std::cout << "The range for bool is from " << std::numeric_limits<bool>::lowest() << " to " << std::numeric_limits<bool>::min() << " to " << std::numeric_limits<bool>::max() << std::endl;

    // For short int
    std::cout << "The range for short is from " << std::numeric_limits<short>::lowest() << " to " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

    // For Unsigned short
    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::lowest() << " to " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;

    // For int
    std::cout << "The range for int is from " << std::numeric_limits<int>::lowest() << " to " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;

    // For Unsigned int
    std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::lowest() << " to " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;

    // For long
    std::cout << "The range for long is from " << std::numeric_limits<long>::lowest() << " to " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;

    // For float
    std::cout << "The range for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;

    // For double
    std::cout << "The range for double is from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;

    // Epsilon For float and double
    std::cout << "\nFloating point numbers epsilon " << std::numeric_limits<float>::epsilon() << std::endl;

    std::cout << "Double numbers epsilon " << std::numeric_limits<double>::epsilon() << std::endl;

    // min_exponent and max_exponent For float and double
    std::cout << "\nFloating point exponents from " << std::numeric_limits<float>::min_exponent << " to " << std::numeric_limits<float>::max_exponent << std::endl;

    std::cout << "Double exponents from " << std::numeric_limits<double>::min_exponent << " to " << std::numeric_limits<double>::max_exponent << std::endl;

    // min_exponent10 and max_exponent10 For float and double
    std::cout << "\nFloating point exponents of power 10 from " << std::numeric_limits<float>::min_exponent10 << " to " << std::numeric_limits<float>::max_exponent10 << std::endl;

    std::cout << "Double exponents of power 10 from " << std::numeric_limits<double>::min_exponent10 << " to " << std::numeric_limits<double>::max_exponent10 << std::endl;

    // digits and digits10 for float and double
    std::cout << "\nFloating point numbers represented decimal digits " << std::numeric_limits<float>::digits10 << " and radix digits " << std::numeric_limits<float>::digits << std::endl;

    std::cout << "Double numbers represented decimal digits " << std::numeric_limits<double>::digits10 << " and radix digits " << std::numeric_limits<double>::digits << std::endl;

    /**
     * @link https://en.cppreference.com/w/cpp/types/numeric_limits/infinity @endlink
     * @brief  std::numeric_limits<Type>::has_infinity
     * @details Check that type supports the infinity or not
     * @brief std::numeric_limits<Type>::infinity()
     */
    std::cout << std::boolalpha;

    std::cout << "\nint has infinity " << (std::numeric_limits<int>::has_infinity == true) << std::endl;
    std::cout << "Float has infinity " << (std::numeric_limits<float>::has_infinity == true) << std::endl;
    std::cout << "double has infinity " << (std::numeric_limits<double>::has_infinity == true) << std::endl;

    double max = std::numeric_limits<double>::max();
    double inf = std::numeric_limits<double>::infinity();

    if (inf > max)
        std::cout << inf << " is greater than " << max << std::endl;

    /**
     * @link https://en.cppreference.com/w/cpp/types/numeric_limits/quiet_NaN @endlink
     * @brief std::numeric_limits<T>::has_quiet_NaN
     * @details Check that type supports the quite_Nan or not
     * @brief std::numeric_limits<Type>::quiet_NaN() and std::numeric_limits<double>::signaling_NaN()
     */

    std::cout << std::boolalpha;

    std::cout << "\nint has infinity " << (std::numeric_limits<int>::has_quiet_NaN == true) << std::endl;
    std::cout << "Float has infinity " << (std::numeric_limits<float>::has_quiet_NaN == true) << std::endl;
    std::cout << "double has infinity " << (std::numeric_limits<double>::has_quiet_NaN == true) << std::endl;

    std::cout << std::numeric_limits<double>::quiet_NaN() << ' '
              << std::numeric_limits<double>::signaling_NaN() << ' '
              << 0 / 0.0 << '\n';

    bool result{std::numeric_limits<double>::quiet_NaN() == std::numeric_limits<double>::quiet_NaN()};

    std::cout << "NaN == NaN? " << result << std::endl;

    return 0;
}