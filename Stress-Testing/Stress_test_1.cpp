#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout;

int main()
{
    size_t number{};
    size_t encrypt{}, decrypt{};

    while (true)
    {
        size_t devide{};
        number = std::rand() % 2032 + 1;
        devide = (number / 94);
        encrypt = (number % 94) + 33;

        decrypt = (encrypt - 33);
        decrypt = (decrypt + (std::floor(devide) * 94));

        // Printing the result
        cout << number << " = " << devide << " = " << encrypt << " = " << decrypt;
        if (number == decrypt)
            cout << " => OK\n";
        else
            break;
    }

    return 0;
}