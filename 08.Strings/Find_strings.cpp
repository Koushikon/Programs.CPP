#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    /*
    Syntax:
    size_t find(const string &str, size_t pos = 0);
    size_t find(const char *s, size_t pos = 0);
    */

    {
        string str1{"The secret word is sleep"};

        size_t position = str1.find("sleep");

        if (position != string::npos)
            cout << "Found, at position: " << position << endl;
        else
            cout << "Sorry, not found" << endl;
    }

    string str1 = "geeksforgeeks an site";
    char chr1[] = "geeks";

    // Find "geeks" starting from index 2
    size_t position = str1.find(chr1, 2);
    if (position != string::npos)
        cout << "Next occurrence is " << position << endl;
}