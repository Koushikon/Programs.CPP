#include <iostream>

using std::cout;
using std::endl;

/**
 * * Implementing Stack Data Structure in C++
 * * An Array Implementation
 */

// Global variables
int arr[100]{};
const int low_index{-1};
const int size{std::size(arr)};
int top{low_index};

// Function Prototypes
void PUSH(int &&val);
void POP();
void Display();
bool isEmpty();

int main()
{
    {
        Display();
        PUSH(71);
        PUSH(36);
        PUSH(24);
        Display();
        PUSH(20);
        PUSH(50);
        POP();
        POP();
        POP();
        POP();
        Display();
        POP();
    }

    cout << std::boolalpha;
    cout << isEmpty() << endl;
    return 0;
}

// Stack PUSH Method
void PUSH(int &&val)
{
    if (top >= size + low_index)
        cout << "Stack is Full, You can't add anymore.\n";
    else
        arr[++top] = val;
}

// Stack POP Method
void POP()
{
    if (top <= low_index)
        cout << "Stack is Empty here.\n";
    else
        top--;
}

// Display Stack Elements
void Display()
{
    for (int i{}; i <= top; i++)
        cout << arr[i] << ' ';
    if (top > low_index)
        cout << '\n';
}

// Check Stack is Empty or not
bool isEmpty()
{
    return (top == low_index) ? true : false;
}