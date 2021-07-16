// Function Return pointer
#include <iostream>

using std::cout;
using std::endl;

int *largest(int *first, int *second);
int *create_array(size_t size, int init_value = 0);
void display_array(int *numbers, size_t size);

int *largest(int *first, int *second)
{
    // if (*first > *second)
    //     return first;
    // else
    //     return second;
    // Or use this conditional ternary operator.
    return (*first > *second) ? first : second;
}

int *create_array(size_t size, int init_value)
{
    int *arr_ptr{nullptr};
    arr_ptr = new int[size];
    // Initializing the array and return newly allocated memory to main function
    for (size_t i{}; i < size; ++i)
        *(arr_ptr + i) = init_value;
    return arr_ptr;
}

void display_array(int *numbers, size_t size)
{
    for (size_t i{}; i < size; ++i)
        cout << numbers[i] << "\t";
    cout << endl;
}

/*
// Don't do these in program.
int dont_do_this1()
{
    int size{};
    // Do not return local variable.
    // Hopefully your program will crash or you'll get an error.
    return size;
}

int dont_do_this2()
{
    int size{};
    int *int_ptr{&size};
    // Do not return local pointer variable too.
    // Hopefully your program will crash or you'll get an error.
    return int_ptr;
}
*/

int main()
{
    int num1{106}, num2{307};

    int *largest_val{nullptr};

    largest_val = largest(&num1, &num2);
    cout << *largest_val << endl;
    cout << "==============" << endl;

    int size{10};
    int *array_ptr{nullptr};
    array_ptr = create_array(size, 15);
    // Initialize array pointer
    display_array(array_ptr, size);

    // Delete pointer after work is done.
    delete[] array_ptr;
    // Pointer was deleted before so we get Garbage data.
    // display_array(array_ptr, size);

    return 0;
}