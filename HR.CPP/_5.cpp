#include <iostream>
using namespace std;

int main()
{
    int n{0}, an_no{0};

    cin >> n >> an_no;

    if (n <= an_no)
    {
        for (int i = n; i <= an_no; i++)
        {
            // Using "switch"
            switch (i)
            {
            case 1:
                cout << "one" << endl;
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                cout << "five" << endl;
                break;
            case 6:
                cout << "six" << endl;
                break;
            case 7:
                cout << "seven" << endl;
                break;
            case 8:
                cout << "eight" << endl;
                break;
            case 9:
                cout << "nine" << endl;
                break;
            default:
                if (i % 2 == 0)
                    cout << "even" << endl;
                else
                    cout << "odd" << endl;
            }

            // Using "if | elseif | else"
            // if (i == 1)
            //     cout << "one" << endl;
            // else if (i == 2)
            //     cout << "two" << endl;
            // else if (i == 3)
            //     cout << "three" << endl;
            // else if (i == 4)
            //     cout << "four" << endl;
            // else if (i == 5)
            //     cout << "five" << endl;
            // else if (i == 6)
            //     cout << "six" << endl;
            // else if (i == 7)
            //     cout << "seven" << endl;
            // else if (i == 8)
            //     cout << "eight" << endl;
            // else if (i == 9)
            //     cout << "nine" << endl;
            // else if (i > 9 && i % 2 == 0)
            //     cout << "even" << endl;
            // else
            //     cout << "odd" << endl;
        }
    }
    else
    {
        cout << "number 1 must lesser than or equal to second number" << endl;
    }

    return 0;
}