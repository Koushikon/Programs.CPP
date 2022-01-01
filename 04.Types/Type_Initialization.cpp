#include <iostream>
#include <string>

int main()
{
    // Value initialization,
    int number1{78}; // Recommanded
    std::cout << number1 << std::endl;

    // Direct Constructor initialization,
    int number2(78);
    std::cout << number2 << std::endl;

    // Copy initialization,
    int number3 = 78;
    std::cout << number3 << std::endl;

    int fst = 0, scn = 0;
    fst = scn = 150;
    std::cout << "fst = " << fst << " ,scn = " << scn << std::endl;

    // List initialization,
    std::string s{'a', 'b', 'c'};
    for (char &val : s)
        std::cout << val << " ";
    std::cout << std::endl;

    // Aggregate initialization,
    char a[3]{'a', 'b', 'd'};
    std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;

    char b[3] = {'d', 'b', 'a'};
    std::cout << b[0] << " " << b[1] << " " << b[2] << std::endl;

    // Reference initialization,
    char &c = b[0];
    std::cout << c << std::endl;
}