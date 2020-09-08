#include <iostream>
using namespace std;

int main()
{
    int num{};
    string str{};
    cin >> num;
    cin.ignore();
    getline(cin, str);
    cout << num * 2 << endl
         << str;
    return 0;
}
