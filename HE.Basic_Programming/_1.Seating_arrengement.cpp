#include <iostream>
using namespace std;

int main()
{
    int test_case{};
    cin >> test_case;
    int seats[test_case];

    for (int i = 0; i < test_case; i++)
    {
        cin >> seats[i];
    }

    // insert value as 2D Array element
    int seat_planning[18][6]{};
    int seat_no{};

    // Loop for determine the no. of lines in bus
    for (int i = 0; i < 18; i++)
    {
        // To determine left & right seat line
        if (i % 2 == 0)
        {
            for (int j = 0; j < 6; j++)
            {
                seat_planning[i][j] = seat_no + 1;
                seat_no++;
            }
        }
        else
        {
            for (int j = 5; j >= 0; j--)
            {
                seat_planning[i][j] = seat_no + 1;
                seat_no++;
            }
        }
    }

    // Loop for searching opposite seat
    for (int o = 0; o < test_case; o++)
    {
        for (int i = 0; i < 18; i++)
        {
            // To determine left & right seat line
            if (i % 2 == 0)
            {
                for (int j = 0; j < 6; j++)
                {
                    if (seats[o] == seat_planning[i][j])
                    {
                        cout << seat_planning[i + 1][j];
                        if (j == 0 || j == 5)
                        {
                            cout << " WS" << endl;
                        }
                        else if (j == 1 || j == 4)
                        {
                            cout << " MS" << endl;
                        }
                        else
                        {
                            cout << " AS" << endl;
                        }
                    }
                }
            }
            else
            {
                for (int j = 5; j >= 0; j--)
                {
                    if (seats[o] == seat_planning[i][j])
                    {
                        cout << seat_planning[i - 1][j];
                        if (j == 0 || j == 5)
                        {
                            cout << " WS" << endl;
                        }
                        else if (j == 1 || j == 4)
                        {
                            cout << " MS" << endl;
                        }
                        else
                        {
                            cout << " AS" << endl;
                        }
                    }
                }
            }
        }
    }

    // Print as 2D array element
    // for (int i = 0; i < 18; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         cout << seat_planning[i][j] << "  ";
    //     }
    //     cout << endl;
    // }

    return 0;
}