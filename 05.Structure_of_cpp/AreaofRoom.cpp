#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the Room width: ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the Room height: ";
    int room_height {0};
    cin >> room_height;

    cout << "The area of the room is " << room_width * room_height << " squire feet" << endl;
}