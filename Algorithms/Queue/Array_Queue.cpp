#include <iostream>

using std::cout;
using std::endl;

/**
 * * Implementing Queue Data Structure in C++
 * * An Array Implementation
 */

// Global variables
int arr[100]{};
const int low_index{-1};
const int size{std::size(arr)};
int Q_front{};
int Q_back{low_index};

// Function Prototype
void EnQueue(int &&num);
void DeQueue();
void Display();
bool isEmpty();

int main()
{
    {
        EnQueue(40);
        EnQueue(770);
        EnQueue(29);
        EnQueue(36);
        EnQueue(99);
        Display();
        DeQueue();
        DeQueue();
        DeQueue();
        Display();
    }

    cout << std::boolalpha;
    cout << isEmpty() << endl;
    return 0;
}

void EnQueue(int &&num)
{
    if (Q_back >= size + low_index)
        cout << "Queue is Full, You can't add anymore.\n";
    else
        arr[++Q_back] = num;
}

void DeQueue()
{
    if (Q_back <= low_index || Q_front > Q_back)
        cout << "Queye is Empty here.\n";
    else
        ++Q_front;
}

// Display Queue Elements
void Display()
{
    for (int i{Q_front}; i <= Q_back; i++)
        cout << arr[i] << ' ';
    if (Q_front <= Q_back)
        cout << '\n';
}

// Check Queue is Empty or not
bool isEmpty()
{
    return (Q_back == low_index) ? true : false;
}