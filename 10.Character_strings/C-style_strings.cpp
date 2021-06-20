#include <iostream>
#include <cstring> // For C-style string functions.
#include <cctype>  // For character based functions.
using namespace std;

int main()
{
    char name[20];        // Without initializing it.
    cout << name << endl; // Will likely display garbage.

    char first_name[20]{}, last_name[20]{}, full_name[50]{}, temp[50]{};

    /*
    // First example.
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;
    // Strlen() function to calculate the no. of characters.
    cout << "Hello, " << first_name << " you first name has : " << strlen(first_name) << " Character's" << endl;
    cout << "And your last name " << last_name << " has : " << strlen(last_name) << " Character's" << endl;

    strcpy(full_name, first_name); // Copy first name to full name.
    strcat(full_name, " ");        // Concatenate full name and a space.
    strcat(full_name, last_name);  // Concatenate last name to full name.
    cout << "Your full name is: " << full_name << endl;
    */

    /*
    // Second example.
    // Do not use cin and con.getline one after another because it cancel out the second input. Also we have to use cin.ignore().
    
    cout << "Behavior of cin extraction operator" << endl
         << "Enter your full name (with cin): ";
    cin >> full_name; // Not work as expected.
    cout << "Your full name is: " << full_name << endl;
    */

    // Third example.
    cout << "Enter your full name (with getline): ";
    // cin.ignore();
    cin.getline(full_name, 50);
    cout << "\tYour full name is: " << full_name << endl;

    strcpy(temp, full_name); // Copy full name to temp.

    // Compare full name and temp without interfaring the value.
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same." << endl;
    else
        cout << temp << " and " << full_name << " are different." << endl;

    // Convert all full name character to Upper case.
    for (size_t i{0}; i < strlen(full_name); ++i)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is: " << full_name << endl;

    // Compare full name and temp with recently changing values.
    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same." << endl;
    else
        cout << temp << " and " << full_name << " are different." << endl;

    cout << "\nResult of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl
         << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
    return 0;
}