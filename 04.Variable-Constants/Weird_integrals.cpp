#include <iostream>

int main()
{
    short num1{10};
    short num2{20};

    char word1{40};
    char word2{50};

    std::cout << "num1 is " << sizeof(num1) << std::endl;
    std::cout << "num2 is " << sizeof(num2) << std::endl;

    std::cout << "\nword1 is " << sizeof(word1) << std::endl;
    std::cout << "word2 is " << sizeof(word2) << std::endl;

    /**
     * @details integrals types less than 4 byte in size don't suppport any arithmatic operations
     * @details But if we do use it will implicitly convert from smaller type to int.
     */
    auto result1{num1 + num2};
    auto result2{word1 + word2};

    std::cout << "\nresult1 is " << sizeof(result1) << std::endl;
    std::cout << "result2 is " << sizeof(result2) << std::endl;

    return 0;
}