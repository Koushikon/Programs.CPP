#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str{};
    getline(cin, str);

    cout << "The lowercase version of str << is - ";
    for (int i = 0; i < str.length(); i++)
    {
        putchar(tolower(str[i]));
    }

    return 0;
}