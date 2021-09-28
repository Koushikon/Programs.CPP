/**
 * @file Cmath.cpp
 * @author Koushik and from C++ Courses
 * @brief <cmath> header stuff
 * @link https://en.cppreference.com/w/cpp/header/cmath @endlink
 * @version 0.1
 * @date 2021-09-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <cmath>

int main()
{
    /**
     * @brief float_t and double_t
     * @details efficient floating-point type at least as wide as float and double
     */
    std::cout << "Float: " << sizeof(float) << " - " << sizeof(float_t) << std::endl;
    std::cout << "Double: " << sizeof(double) << " - " << sizeof(double_t) << std::endl;

    /**
     * @brief std::floor(n), std::ceil(n) and std::round(n)
     * @details returns floor , ceiling and rounding values of given number
     * 
     */
    double weight{7.7};

    // floor values
    std::cout << "\nWeight's floor value is " << std::floor(weight) << std::endl;

    // ceil values
    std::cout << "Weight's ceil value is " << std::ceil(weight) << std::endl;

    // round values

    /**
     * @brief std::abs(n)
     * @details returns absolute value of given number
     * 
     */

    weight = 46.9;
    double savings{-5000.00};

    // abs absolute values no negative
    std::cout << "\nWeight's abs value is " << weight << std::endl;
    std::cout << "Savings's abs value is " << savings << std::endl;

    /**
     * @brief std::exp(n) e = 2.71828182845
     * @details returns the e raised to the given power
     * 
     */
    double exponential1{}; // e^10
    exponential1 = std::exp(10);
    std::cout << "\nThe exponential of [e^10] is " << exponential1 << std::endl;

    /**
     * @brief std::exp2(n)
     * @details returns 2 raised to the given power
     * 
     */
    double exponential2{}; // e^10
    exponential2 = std::exp2(10);
    std::cout << "The exponential of [2^10] is " << exponential2 << std::endl;

    /**
     * @brief expm1  | e^x - 1
     * @details Computes the Euler's number raised to the given power - 1
     */
    std::cout << "The exponential of [e^10 - 1] is " << std::expm1(10) << std::endl;

    /**
     * @brief std::power(n)
     * @details raises a number to the given power and returns it
     * 
     */
    int num1{10};
    std::cout << "\nThe number 10^3 is " << std::pow(num1, 3) << std::endl;

    /**
     * @brief std::log(n)
     * @details returns the how many times if we raised e's to get the given value
     * 
     */
    std::cout << "\nLog: to get 54.59 we would elevate e to the power of " << std::log(54.59) << std::endl;

    /**
     * @brief std::log2(n)
     * @details returns the how many times if we raised 2's to get the given value
     * 
     */

    std::cout << "Log: to get 16 we would elevate 2 to the power of " << std::log2(16) << std::endl;

    /**
     * @brief std::log10(n)
     * @details returns the how many times if we raised 10's to get the given value
     * 
     */

    std::cout << "Log: to get 1000 we would elevate 10 to the power of " << std::log10(1'000) << std::endl;

    /**
     * @brief std::log1p(n)
     * @details returns logarithm (to base e) of 1 plus the given number
     * 
     */
    std::cout << "Log: to get 54.59 + 1 we would elevate e to the power of " << std::log1p(54.59) << std::endl;

    /**
     * @brief std::sqrt(n) and std::cbrt(n)
     * @details return square-root and cube-root of given number
     * 
     */
    std::cout << "\nThe Square-root of 81 is " << std::sqrt(81) << std::endl;

    std::cout << "The Cube-root of 27 is " << std::cbrt(27) << std::endl;

    /**
     * @brief std::sin(n)
     * @details computes the sine of given number
     * 
     */
    const double pi = std::acos(-1);
    std::cout << "\nSin (pi/6) = " << std::sin(pi / 6)
              << "\nSin (pi/2) = " << std::sin(pi / 2)
              << "\nSin (-3*pi/4) = " << std::sin(-3 * pi / 4) << std::endl;

    /**
     * @brief std::cos(n)
     * @details computes the cosine of given number
     * 
     */
    std::cout << "\nCos (pi/3) = " << std::cos(pi / 3)
              << "\nCos (pi/2) = " << std::cos(pi / 2)
              << "\nCos (-3*pi/4) = " << std::cos(-3 * pi / 4) << std::endl;

    /**
     * @brief std::tan(n)
     * @details computes the tangent of given number
     * 
     */
    std::cout << "\nTan (pi/4) = " << std::tan(pi / 4) << "\nTan (3*pi/4) = " << std::tan(3 * pi / 4) << "\nTan (5*pi/4) = " << std::tan(5 * pi / 4) << "\nTan (7*pi/4) = " << std::tan(7 * pi / 4) << std::endl;

    return 0;
}