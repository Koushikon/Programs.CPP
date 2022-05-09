#include <iostream>

/**
 * Array Reversing Elements
 */

using std::cin;
using std::cout;
using std::endl;

// Function Prototype
void array_input(int nums[], const int &size);
void print_array(const int nums[], const int &size);
void reverse_array(int nums[], int arr_size);

int main()
{
    int size{};
    cout << "Enter the No. :";
    cin >> size;

    int numbers[size]{};
    array_input(numbers, size);
    print_array(numbers, size);

    reverse_array(numbers, size);
    print_array(numbers, size);

    return 0;
}

void array_input(int nums[], const int &size)
{
    for (int i{}; i < size; i++)
    {
        cout << "Enter the element for [" << i << "] :";
        cin >> nums[i];
    }
}

void print_array(const int nums[], const int &size)
{
    for (int i{}; i < size; i++)
        cout << nums[i] << ' ';
    cout << endl;
}

void reverse_array(int nums[], int arr_size)
{
    for (int i{}; i < (arr_size / 2); i++)
    {
        int temp = nums[i];
        nums[i] = nums[arr_size - i - 1];
        nums[arr_size - i - 1] = temp;
    }
}