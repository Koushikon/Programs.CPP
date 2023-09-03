#include <iostream>
#include <string>

using namespace std;

bool FLAG_REPEAT = false;

char Take_Input()
{
    if (FLAG_REPEAT == false)
    {
        FLAG_REPEAT = true;
        return 'R';
    }

    char n = 0;
    cout << "Want to continue? - ";
    cin >> n;

    return n;
}

int Take_Input(string message)
{
    int n = 0;
    cout << message;
    cin >> n;

    return n;
}

int Cal_Area(int height = 1, int width = 1)
{
    return height * width;
}

int main()
{
    int room_width{1}, room_height{1};

    while (tolower(Take_Input()) != 'n')
    {
        room_width = Take_Input("Enter the Room width: ");
        room_height = Take_Input("Enter the Room height: ");

        cout << "The area of the room is " << Cal_Area(room_width, room_height) << " squire feet" << endl;
    }
}

/**
 * Or, Run this program with single Method
 * In the following:
 */

/*
int main()
{
    int room_width{1}, room_height{1};

    cout << "Enter the Room width: ";
    cin >> room_width;
    cout << "Enter the Room height: ";
    cin >> room_height;

    cout << "The area of the room is " << Cal_Area(room_width, room_height) << " squire feet" << endl;
}
*/