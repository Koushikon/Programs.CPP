#include <iostream>

using std::cout;
using std::endl;

class EX_1;
class EX_2;

class EX_1
{
protected:
    int x{43};

public:
    void display(void)
    {
        cout << "EX_1 Value is " << x << endl;
    }
};

class EX_2
{
protected:
    int y{27};

public:
    void display(void)
    {
        cout << "EX_2 Value is " << y << endl;
    }
};

class BOTH : public EX_1, public EX_2
{
    int sum{x + y};

public:
    void add(void)
    {
        cout << "X + Y is " << sum << endl;
    }
};

int main()
{
    BOTH obj1;
    // obj1.display(); // member 'display' is ambiguous

    /**
     * * Ambiguity Resolution:
     */
    obj1.EX_1::display();
    obj1.EX_2::display();
    obj1.add();

    return 0;
}