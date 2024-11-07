#include <iostream>

using namespace std;

int main()
{
    int scores[]{10, 12, 15, 16, 18, 20, 21, 23}; // An int type array

    // Array with size
    cout << "scores size: " << size(scores) << endl;

    for (size_t i{0}; i < size(scores); i++)
    {
        cout << "scores[" << i << "] : " << scores[i] << endl;
    }

    // Array with sizeof
    cout << "size of scores : " << sizeof(scores) << endl;
    cout << "size of scores[0] : " << sizeof(scores[0]) << endl;
    cout << "scores item count : " << (sizeof(scores) / sizeof(scores[0])) << endl;

    size_t count{sizeof(scores) / sizeof(scores[0])};

    cout << "Printing out the array items : " << endl;
    for (size_t i{}; i < count; i++)
    {
        cout << "scores[" << i << "] : " << scores[i] << endl;
    }

    // Looping through an array
    cout << "Using Range based for loop to printing out the array items : " << endl;
    for (int &item : scores)
    {
        cout << item << " ";
    }
    cout << endl;

    // Array Bounds
    int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // Read beyond bounds : will read garbage or crash the program
    cout << "numbers[12] " << numbers[12] << endl;

    // Write beyond bounds, The compiler allows it. But we don't own
    // the memory at index 12, so other programs may modify it and your
    // program may read wrong data at a later time, Or we can even
    // corrupt data used by other parts of our program
    numbers[12] = 1000; // acccessing out of bound memory
    cout << "numbers[12] " << numbers[12] << endl;

    return 0;
}