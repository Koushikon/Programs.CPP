// Switch statement with enum
#include <iostream>
using namespace std;

int main()
{
    enum Direction
    {
        left,
        right,
        up,
        down,
        round
    };

    Direction heading{round};

    switch (heading)
    {
    case left:
        cout << "Going left." << endl;
        break;
    case right:
        cout << "Going right." << endl;
        break;
    case up:
        cout << "Going up." << endl;
        break;
    case down:
        cout << "Going down." << endl;
        break;
    default:
        cout << "OK, Thats not possible" << endl;
    }

    return 0;
}