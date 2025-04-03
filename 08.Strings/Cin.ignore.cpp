#include <iostream>
#include <string>
#include <sstream>
#include <numeric>
#include <limits>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    // Clear the leftover newline character in the buffer
    // that means without this line our program will thought \n (Enter key) is the next input for string name
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your name: ";
    getline(cin, name); // Read the entire line, including spaces

    cout << "Your name is " << name << " and your age is " << age << endl;

    // Example-2
    char a, b;

    cout << "Enter two characters separated by a comma (e.g., A,B): ";
    cin >> a;           // Reads the first character
    cin.ignore(1, ','); // Skips the comma
    cin >> b;           // Reads the second character

    cout << "First character: " << a << ", Second character: " << b << endl;

    // Example-3 Handle Error
    int number;

    cout << "Enter a number: ";
    while (!(cin >> number))
    {
        cin.clear();                                         // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        cout << "Invalid input. Please enter a number: ";
    }

    cout << "You entered: " << number << endl;

    return 0;
}
