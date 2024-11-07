#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/*
Find the generating function for the following
sequence: 0, 1, —2, 3, —4, 5, -6, .....
*/

// Function Prototype
int generating_seq(int round, int count = 1, int value = 1);

int main()
{
    int rounds{};
    cout << "Enter No. of sequence you cant to see? ";
    cin >> rounds;

    cout << 0;
    generating_seq(rounds);

    return 0;
}

int generating_seq(int round, int count, int value)
{
    if (round <= 1)
        return 0;

    if (value >= 0)
    {
        cout << " | " << value;
        round--;
        count += 2;
        value -= count;
        generating_seq(round, count, value);
    }
    else
    {
        cout << " | " << value;
        round--;
        count += 2;
        value += count;
        generating_seq(round, count, value);
    }
    return 0;
}