#include <iostream>
#include <cstring> // For C-style string functions.
using namespace std;

int main()
{
    char str[80];
    strcpy(str, "Hello ");
    strcat(str, "There!");
    cout << str << " length is: " << strlen(str) << " and Compare: " << strcmp(str, "Another") << endl;
    return 0;
}