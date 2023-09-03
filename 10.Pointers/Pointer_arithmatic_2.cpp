// Pointer Arithmatic operations
#include <iostream>

using std::boolalpha;
using std::cout;
using std::endl;

int main()
{
    int score[]{77, 95, 102, 35, 62, -1};
    cout << score << "\t" << &score[0] << endl;

    int *scores{score};

    // Printing the elements of scores array.
    // while (*scores != -1)
    // {
    //     cout << *scores << "\t";
    //     scores++;
    // }
    // cout << endl;

    // we could use above statement like this in one line.
    while (*scores != -1)
        cout << *(scores++) << "\t";
    // cout << *scores++ << "\t";
    cout << endl;

    char name[]{"Bobry"};
    char *char_ptr1{&name[0]}, *char_ptr2{&name[3]};

    cout << "In the string with pointer " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " character away from " << *char_ptr1 << endl;
    cout << "In the string without pointer " << name << ", " << name[3] << " is " << (&name[3] - &name[0]) << " character away from " << name[0] << endl;

    return 0;
}