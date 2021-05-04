#include <iostream>
#include <cmath>

/*
int add_numbers(int a, int b)
{
    if (a < 0 || b < 0)
        return 0;
    else
        return (a + b);
}*/

int main()
{
    // 1st_one
    // std::cout << "The sum is: " << add_numbers(7, 8) << std::endl;

    // 2nd_one
    // std::cout << std::sqrt(5400.0) << std::endl; // Square Root double funnction call
    // std::cout << std::cbrt(27.0) << std::endl;  // Cube Root double funnction call

    // 3rd_one
    double num{};
    std::cout << "Enter the numbers: ";
    std::cin >> num;

    std::cout << "The Square Root of " << num << " is " << std::sqrt(num) << std::endl
              << "The Cube Root of " << num << " is " << std::cbrt(num) << std::endl
              << std::endl
              << "The Sin of " << num << " is " << std::sin(num) << std::endl
              << "The Cos of " << num << " is " << std::cos(num) << std::endl
              << std::endl
              << "The Floor of " << num << " is " << std::floor(num) << std::endl
              << "The Round of " << num << " is " << std::round(num) << std::endl
              << "The Ciel of " << num << " is " << std::ceil(num) << std::endl;

    double power{};
    std::cout << "Enter the Power: ";
    std::cin >> power;
    std::cout << "The power of " << num << " ^ " << power << " is " << std::pow(num, power) << std::endl;

    return 0;
}