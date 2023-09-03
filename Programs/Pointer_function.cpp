// Return Pointer from Functions in C++
#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

int *get_random();

int *get_random()
{
    static int arr[10]{};

    // set the seed
    srand((unsigned)time(NULL));

    for (size_t i{}; i < 10; ++i)
    {
        arr[i] = rand();
        cout << arr[i] << endl;
    }
    return arr;
}

int main()
{
    int *ptr;

    ptr = get_random();

    for (size_t i{}; i < 10; ++i)
        cout << "*(P + " << i + 1 << " ) = " << *(ptr + i) << endl;
}
