#include <iostream>

int main()
{
    /*************
     * boolean type
    *************/

    bool game_over{false};
    std::cout << "Your game result was - " << game_over << std::endl;

    bool red_light{true};
    bool green_light{false};

    if (red_light != green_light)
        std::cout << "Gr through!" << std::endl;
    else
        std::cout << "Stop!" << std::endl;

    if (green_light)
        std::cout << "Yes, its on" << std::endl;
    else
        std::cout << "No, its not on" << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Green light: " << green_light << std::endl;
    std::cout << "Red light: " << red_light << std::endl;
    std::cout << std::noboolalpha;

    return 0;
}