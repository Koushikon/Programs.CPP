#include <iostream>

using namespace std;

class A
{
    int x;    // 4 bytes (on most compilers)
    double y; // 8 bytes (on most compilers)
};

class Empty
{
};

int main()
{
    A obj1;
    cout << "Size of class A object: " << sizeof(obj1) << " bytes." << endl;
    // Due to memory padding, the actual size might be more than the sum of its members.

    cout << "Size of Empty class: " << sizeof(Empty) << " bytes" << endl;
    // Even an empty class has a size of at least 1 byte to ensure unique memory addresses for its objects.

    return 0;
}