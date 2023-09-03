#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    int size{};
    cout << "Enter how many batsman you want to add: ";
    cin >> size;

    string *cricket_ptr{nullptr};
    /* It will allocate more and more memory on the heap until runs out of memory
    */
    while (true)
        cricket_ptr = new string[size];
    // It goes to a infinity loop and crashes the system.

    return 0;
}