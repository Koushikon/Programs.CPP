#include <iostream>
using namespace std;

int main()
{
    unsigned int a = 60; // 60 = 0011 1100
    unsigned int b = 13; // 13 = 0000 1101
    int c = 0;
    cout << "Bitwise operator example :" << endl;

    c = a & b; // 12 = 0000 1100
    // a &= b; // Or we could use this
    cout << "Value of c is : " << c << endl;

    c = a | b; // 61 = 0011 1101
    // a |= b; // Or we could use this
    cout << "Value of c is : " << c << endl;

    c = a ^ b; // 49 = 0011 0001
    // a ^= b; // Or we could use this
    cout << "Value of c is : " << c << endl;

    c = ~a; // -61 = 1100 0011
    cout << "Value of c is : " << c << endl;

    c = a << 2; // 240 = 1111 0000
    // a <<= 2; // Or we could use this
    cout << "Value of c is : " << c << endl;

    c = a >> 2; // 15 = 0000 1111
    // a >>= 2; // Or we could use this
    cout << "Value of c is : " << c << endl;

    return 0;
}