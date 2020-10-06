#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1{"The secret word is sleep"}, word{};

    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found, " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;

    return 0;
}