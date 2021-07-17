#include <iostream>

int main()
{
    int fav_no;
    std::cout << "Enter your favorite number between 1 & 100: ";
    std::cin >> fav_no;
    std::cout << "Amazing!! That's my favorite number too.\n" << "No Really!! " << std::endl;

    int fav_no2{}; // No need to provide explicitly like this - {0}, It's Same.
    std::cout << fav_no2 << std::endl;
    return 0;
}