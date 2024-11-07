#include <iostream>

using std::cout;
using std::endl;

class Ball
{
    int val{};

public:
    Ball(int count = 0)
    {
        val = count;
        cout << "Ball constructor called - " << val << endl;
    }
    ~Ball()
    {
        cout << "Ball destructor called - " << val << endl;
    }
};

class Foot : public Ball
{
public:
    Foot()
    {
        cout << "Foot constructor called - " << 7 << endl;
    }
    ~Foot()
    {
        cout << "Foot destructor called - " << 7 << endl;
    }
};

int main()
{
    Ball b1{111};

    {
        Foot f1{};
    }
    return 0;
}