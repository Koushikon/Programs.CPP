// Pointer Arithmatic operations
#include <iostream>
#include <string>

using std::boolalpha;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1{"Jhony"}, s2{"Jhony"};

    string *p1{&s1}, *p2{&s2}, *p3{&s1};

    cout << boolalpha;
    cout << (p1 == p2) << endl
         << (p1 == p3) << endl
         << (p1 != p2) << endl
         << endl;

    cout << (*p1 == *p2) << endl
         << (*p1 == *p3) << endl;
    return 0;
}