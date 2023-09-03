// CPP program to illustrate substr()
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    {
        string str1 = "Geeks";

        // Extract the Sub-string length 3 from index-1 position
        string sub1 = str1.substr(1, 3);

        cout << "1st Sub-string is: " << sub1 << endl;
    }

    // How to get sub-string after a character?
    string str2 = "dog:cat";

    // Find position of ':' using find()
    int pos = str2.find(":");

    // Extract the Sub-string from "pos" position to at the end
    string sub2 = str2.substr(pos + 1);

    cout << "2nd Sub-string is: " << sub2 << endl;
}
