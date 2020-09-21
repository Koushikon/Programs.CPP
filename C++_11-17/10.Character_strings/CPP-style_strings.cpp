#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2{"Kolkata"};
    string s3{s2};
    string s4{s3, 4};
    string s5("Kolkata now", 3);
    string s6{s3, 0, 2};
    string s7(3, 'X');

    return 0;
}