#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str{};
    getline(cin, str);

    int no_of_z{}, no_of_o{};
    if (str.length() <= 20)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'z' || str[i] == 'Z')
            {
                ++no_of_z;
            }
            else if (no_of_z && str[i] == 'o' || no_of_z && str[i] == 'O')
            {
                ++no_of_o;
            }
        }
        if ((no_of_z || no_of_o) > 0 && (no_of_z * 2) == no_of_o)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "Input String length is more than 20, not accepted" << endl;
    }

    return 0;
}