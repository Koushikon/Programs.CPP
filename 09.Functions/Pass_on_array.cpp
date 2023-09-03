#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void print_array_const();
void print_array();
void set_array();

void print_array1(const int arr[], int size)
{
    for (size_t i{}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;

    // Error because of const keyword, we can't change the array any way in this scope
    // arr[0] = 5000;
}

void print_array2(int arr[], int size)
{
    arr[0] = 5000;
    for (size_t i{}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void set_array(int arr[], int size, int value)
{
    for (size_t i{}; i < size; ++i)
        arr[i] = value;
}

int main()
{
    int numbers[5]{77, 55, 64, 80, 61};

    print_array1(numbers, 5);

    set_array(numbers, 5, 211);

    print_array2(numbers, 5);

    return 0;
}