#include <iostream>
#include <cstring>

using std::cout;

/**
 * * The Last char of a C-style string is the null character.
 * * Which is \0.
 * * If we find \0 in a C-style string, we know that the string is finished.
 */

int main()
{
    char fname[7]{"Bjarne"}, lname[11]{"Stroustrup"};

    size_t fname_len{strlen(fname)}, lname_len{strlen(lname)};

    char name[17];
    /**
     * * Copy the String
     * * Syntax: strcpy(destination, source);
     */
    strcpy(name, fname);
    /**
     * * Concatenate the String
     * * Syntax: strcat(destination, source);
     */
    strcat(name, lname);

    size_t name_len{strlen(name)}; // Length of the string.

    cout << "Length of the " << fname << " is " << fname_len
         << "\nLength of the " << lname << " is " << lname_len
         << "\nLength of the " << name << " is " << name_len << " letters long.\n";

    // Declare anohter string.
    char str[80];

    strcpy(str, "Hello ");
    strcat(str, "There!");

    /**
     * * Compare the String
     * * Syntax: strcmp(string1, string2);
     */
    int value{strcmp(str, "Another")};
    cout << str << " length is: " << strlen(str)
         << "\nAnd Compare: " << value << std::endl;

    return 0;
}