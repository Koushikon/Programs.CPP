#include <iostream>
#include <iomanip>

int main()
{
    float number1{1.12345678901234567890f};
    double number2{1.12345678901234567890};
    long double number3{1.12345678901234567890L};

    // Shows default precision
    std::cout << number1 << " " << sizeof(number1) << "\n"
              << number2 << " " << sizeof(number2) << "\n"
              << number3 << " " << sizeof(number3) << std::endl;

    // Setting up precision to 50
    std::cout << std::setprecision(50);
    // These variables only stores limited no. of digits and other are garbage value
    std::cout << number1 << " " << sizeof(number1) << "\n"
              << number2 << " " << sizeof(number2) << "\n"
              << number3 << " " << sizeof(number3) << std::endl;

    std::cout << "= = = = = =" << std::endl;

    // Scientific notation 'e' expression
    double number5{192400023};
    double number6{1.192400023e8};
    double number7{1.1924e8};
    double number8{0.00000000003498};
    double number9{3.498e-11};

    std::cout << "Scientific notation: " << number5 << "\n"
              << number6 << "\n"
              << number7 << "\n"
              << number8 << "\n"
              << number9 << std::endl;

    std::cout << "= = = = = =" << std::endl;

    double number10{5.6};
    double number11{}; // to 0
    double number12{}; // to 0

    double result{number10 / number11};

    // inf - Positive or Negative Infinity
    std::cout << number10 << " / " << number11 << " yelds " << result << std::endl
              << result << " + " << number10 << " yelds " << result + number10 << std::endl;

    // Nan - Not a number
    result = number11 / number12;
    std::cout << number11 << " / " << number12 << " = " << result << std::endl;
    return 0;
}