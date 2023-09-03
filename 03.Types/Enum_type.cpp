#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // It  works like RED = 0, GREEN = 1, BLUE = 2 in background
    enum Color1
    {
        RED,
        GREEN,
        BLUE
    };

    Color1 c1 = Color1::RED; // Assign this way
    Color1 c2 = BLUE;        // Or, Assign this way
    cout << c1 << "\t" << c2 << endl;

    /*
    Or, this way
    We can't assign decimal values (7.3) that won't work
    */
    enum Fruit
    {
        Banana = 7,
        Lemon = 5,
        Watermelon = 35
    };

    Fruit f1 = Banana;
    Fruit f2 = Lemon;
    cout << f1 << "\t" << f2 << endl;

    return 0;
}