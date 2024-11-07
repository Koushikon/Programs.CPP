#include <iostream>

using namespace std;

int main()
{
    char message[7]{'M', 'e', 's', 's', 'a', 'g', 'e'}; // Declaring char array

    // Printing out the char array
    cout << "Full Msg: ";
    for (char c : message)
    {
        cout << c;
    }
    cout << endl;
    cout << "Msg Size is " << size(message) << endl;

    // Also modifying elements of the char array
    message[3] = '$';

    cout << "Full Msg: ";
    for (char c : message)
    {
        cout << c;
    }
    cout << endl;

    char msg2[]{'M', 'e', 's', '\0', 'a', 'g', 'e'};

    cout << "Full Msg2: ";
    for (char c : message)
    {
        cout << c;
    }
    cout << endl;

    // Auto filled with null character
    // Character arrays are special, We can directly print them
    char msg3[6]{'G', 'o', 'd', 'e', 'n'};
    cout << "Msg3 " << msg3 << endl;
    cout << "Msg3 Size " << size(msg3) << endl;

    // This is not a C string, as there is not null character
    char msg4[]{'G', 'o', 'd', 'e', 'n'};
    cout << "Msg4 " << msg4 << endl;
    cout << "Msg4 Size " << size(msg4) << endl;

    // literal C String with initialization
    // An implicit '\0' character is appended to the end of the string, making it a c string
    char msg5[]{"Duck"};
    cout << "Msg5 " << msg5 << endl;
    cout << "Msg5 Size " << size(msg5) << endl;

    // Can even have spaces between characters
    char msg6[]{"Rubber Duck"};
    cout << "msg6 " << msg6 << endl;
    cout << "msg6 Size " << size(msg6) << endl;

    // Can't directly print them
    int nums[]{4, 5, 6, 7, 8, 9};
    cout << "nums " << nums << endl; // Now gonna work : Garbage
    cout << "nums Size " << size(nums) << endl;

    return 0;
}