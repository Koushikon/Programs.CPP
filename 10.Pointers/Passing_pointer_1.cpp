// Passing pointers in functions
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

int main()
{
    int marks{};
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100)
    {
        // Pass data with address operator
        cout << "Old: " << marks;
        double_data(&marks);
        cout << "\tNew: " << marks << endl;

        // Pass pointer to function
        int *marks_ptr{&marks};
        cout << "Old: " << marks;
        double_data(marks_ptr);
        cout << "\tNew: " << marks << endl;
    }
    else
    {
        cout << "Enter marks between 0 to 100" << endl;
    }

    return 0;
}