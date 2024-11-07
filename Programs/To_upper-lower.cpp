#include <iostream>

using namespace std;

char toUpper(char ch)
{
    char ans = ch - 'a' + 'A';
    return ans;
}

char toLower(char ch)
{
    char ans = ch - 'A' + 'a';
    return ans;
}

int main()
{
    char result = toUpper('k');
    cout << result << endl;

    result = toLower('J');
    cout << result << endl;
    return 0;
}