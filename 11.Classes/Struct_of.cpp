#include <iostream>

using std::cout;

enum Colors
{
    Red,
    Blue,
    Green = 7
};

// struct use for variable declaration only
struct Product
{
    Colors color;
    int weight;
    double price;
};

int main()
{
    Product pdt1; // int = 4, double = 8, color = 4
    cout << sizeof(pdt1) << " = ("
         << sizeof(pdt1.color) << " + "
         << sizeof(pdt1.weight) << " + "
         << sizeof(pdt1.price) << ")\n";

    pdt1.color = Red;
    pdt1.weight = 4;
    pdt1.price = 8.0;
    cout << "Color " << pdt1.color << "\n"
         << "Weight " << pdt1.weight << "\n"
         << "price " << pdt1.price << "\n";
    pdt1.color = Green;
    cout << "Color " << pdt1.color << "\n";
    // cout << pdt1 << "\n"; // Error
    return 0;
}