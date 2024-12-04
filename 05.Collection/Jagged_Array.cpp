#include <iostream>

using namespace std;

void example_1()
{
    int first[]{7, 8, 9, 10};
    int second[]{11, 12};
    int third[]{22, 33, 44};

    int *jaggedAry[] = {first, second, third};
    int sizes[]{4, 2, 3};

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < sizes[i]; j++)
        {
            cout << jaggedAry[i][j] << " ";
        }
        cout << endl;
    }
}

void example_2()
{
    int row{3};
    int **jaggedAry = new int *[row];
    int sizes[]{4, 2, 3};

    // Create Row Array- dynamic array of pointers
    for (size_t i{}; i < row; i++)
    {
        jaggedAry[i] = new int[sizes[i]];
        // *(jaggedAry + i) = new int[sizes[i]];
    }

    // Assigns the value
    int count{1};
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < sizes[i]; j++)
        {
            jaggedAry[i][j] = count++;
        }
    }

    // Display the value
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < sizes[i]; j++)
        {
            cout << jaggedAry[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    example_1();

    example_2();

    return 0;
}