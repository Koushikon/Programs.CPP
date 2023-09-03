/**
 * @file Const.cpp
 * @author Koushik and from C++ Courses
 * @brief C++ const keyword
 * @version 0.1
 * @date 2021-09-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

int main()
{
    const unsigned int earth_radius_km{6371}; // radius in km
    const double size{55.6};

    // Can't be changed after declaration
    // earth_radius_km = 7777;
    // earth_radius_km++;
    // size = size + 3;

    /**
     * @details aceesing that address and try to change but it won't happen.
     * 
     */

    /*
    int *point{&earth_radius_km};
    *point = 5100;
    std::cout << *point << std::endl;
    */

    /**
    * @details But we can use const variable to initialize another variable
    * 
    */
    int var{earth_radius_km};
    var = 2700;
    std::cout << var / 2 << std::endl;

    return 0;
}