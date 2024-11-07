#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int input(string msg = "");

int input(string msg)
{
    int value{0};
    cout << msg;
    cin >> value;
    return value;
}

int main()
{
    int interger{0};

    input();

    interger = input();
    cout << interger << endl;

    interger = input("Enter the number? ");
    cout << interger << endl;
}