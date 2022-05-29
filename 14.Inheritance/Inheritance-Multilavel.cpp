#include <iostream>

using std::cout;
using std::endl;

/**
 * * Example of Single Inheritance
 */

class Life
{
public:
    Life()
    {
        cout << "\n Life's Constructor Called \n";
    }
};

class Animal : public Life
{
public:
    Animal()
    {
        cout << "\n Animal's Constructor Called \n";
    }
};

class Tiger : public Animal
{
public:
    Tiger()
    {
        cout << "\n Tiger's Constructor Called \n";
    }
};

int main()
{
    Tiger t;
    return 0;
}