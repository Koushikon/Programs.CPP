// Passing pointers in functions
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_data(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int num1{}, num2{};
    cout << "Enter the marks: ";
    cin >> num1 >> num2;

    // Pass data with address operator
    cout << "num1: " << num1 << "\tnum2: " << num2 << endl;
    swap_data(&num1, &num2);
    cout << "num1: " << num1 << "\tnum2: " << num2 << endl;

    return 0;
}