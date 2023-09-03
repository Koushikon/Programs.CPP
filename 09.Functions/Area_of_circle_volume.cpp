// Area of an Circle and Volume of an Cyllinder
#include <iostream>

const double pi{3.14159};

double calc_area_circle(double radius)
{
    return (pi * (radius * radius));
}

double calc_volume_cyllinder(double radius, double height)
{
    // return (pi * ((radius * radius) * height));
    return (calc_area_circle(radius) * height);
}

void area_circle()
{
    double radius{};
    std::cout << "Enter the radius of an Circle: ";
    std::cin >> radius;

    std::cout << "The Area of a Circle with radius " << radius << " is " << calc_area_circle(radius) << std::endl;
}

void volume_cyllinder()
{
    double radius{}, height{};
    std::cout << "Enter the radius of an Cyllinder: ";
    std::cin >> radius;
    std::cout << "Enter the height of an Cyllinder: ";
    std::cin >> height;

    std::cout << "The Volume of a Cyllinder with radius " << radius << " and height " << height << " is " << calc_volume_cyllinder(radius, height) << std::endl;
}

int main()
{
    // Remember: We can call the function as many time as we want.
    area_circle();
    // area_circle();
    volume_cyllinder();
    return 0;
}