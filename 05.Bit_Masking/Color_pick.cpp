#include <iostream>

using std::cout;
using std::endl;

/**
 * * Use Masking in Color information
 */

constexpr unsigned int red_mask{0xFF000000};
constexpr unsigned int green_mask{0x00FF0000};
constexpr unsigned int blue_mask{0x0000FF00};
constexpr unsigned int alpha_mask{0x000000FF}; // Transparency information

constinit unsigned int my_color{0xAABCDE00};

int main()
{
    cout << std::hex << std::showbase;
    cout << "Red is: " << ((my_color & red_mask) >> 24) << '\n';
    cout << "Red is: " << ((my_color & green_mask) >> 16) << '\n';
    cout << "Red is: " << ((my_color & blue_mask) >> 8) << '\n';
    cout << "Red is: " << ((my_color & alpha_mask) >> 0) << std::endl;

    return 0;
}