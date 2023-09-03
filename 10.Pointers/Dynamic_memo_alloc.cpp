#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    int *int_ptr{nullptr};

    // Allocate the integer on the heap memory.
    int_ptr = new int;

    cout << int_ptr << endl;
    cout << *int_ptr << endl; // Gardage value.

    *int_ptr = 188;
    cout << *int_ptr << endl;

    // Now, The memory we allocate we have to de-allocate or release it.
    delete int_ptr;

    int size{};
    cout << "Enter how many batsman you want to add: ";
    cin >> size;
    cin.ignore();

    string *cricket_ptr{nullptr};
    cricket_ptr = new string[size];

    string name{};
    // Initializing the array elements.
    for (size_t i{}; i < size; ++i)
    {
        /*  Or we could do that instead of using cin.ignore()
            Otherwise we couldn't input on cricket_ptr of an array at '0' index properly.*/
        // getline(cin, name, 'x');

        getline(cin, name);
        cricket_ptr[i] = name;
    }

    for (size_t i{}; i < size; ++i)
    {
        cout << cricket_ptr[i] << "\t";
    }
    cout << endl;

    // Remove or release the allocated array memory like this:
    delete[] cricket_ptr;

    return 0;
}