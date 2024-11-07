#include <iostream>

using namespace std;

void SolveProblem_1(int nums[], int size);
void PrintTheArray(int nums[], int size);

int main()
{
    // Array Declaration OR Array Creation
    // ===================================
    int arr_int[15];   // declaring int array with 15 size
    int arr2_int[1];   // declaring int array with 1 size
    bool arr_bool[10]; // declaring bool array with 10 size
    char arr_char[8];  // declaring char array with 8 size

    // Array Declaration with Initialization
    // Better to use array size as variable
    // ====================================
    int array1_of_int[5] = {5, 10, 15, 20, 25}; // Here, All the elements is assigned with value 5, 10, 15, 20, 25
    int array2_of_int[7] = {11, 2, 33};         // Here, Only three elements are assigned with value 11, 22, 33 rest of them will be 0.

    /**
     * * If we provide all of the array elements when declaring we don't have to add the size of the Array.
     * It will be automatically determined based on no. of values in array initialization list.
     */
    int array3_of_int[] = {7, 14, 21, 32}; // array size would be 4

    // Array indexing starts with (0 to size - 1)
    // =========================================
    cout << array3_of_int << endl;    // array base address
    cout << *array3_of_int << endl;   // base address == first element
    cout << array3_of_int[0] << endl; // first element
    cout << array3_of_int[3] << endl; // last element

    // Trying to access out of bound element.
    cout << array3_of_int[6] << endl; // Gets unexpected result or error.

    // Fill Array elements with data
    // =============================
    int array4_size{5};
    int array4_of_int[array4_size];
    array4_of_int[0] = 15;
    array4_of_int[1] = 15;
    array4_of_int[2] = 15;
    array4_of_int[3] = 15;
    array4_of_int[4] = 15;

    // Print all the elements of the array
    // =============================
    cout << array4_of_int[0] << "  "
         << array4_of_int[1] << "  "
         << array4_of_int[2] << "  "
         << array4_of_int[3] << "  "
         << array4_of_int[4] << "  " << endl;

    /**
     * * Filling the elements in above approach is time consuiming and tedious
     * We can use a method called fill to this.
     * Beggining to Last address mentioned elements are set to 50
     */
    fill(array4_of_int, array4_of_int + array4_size, 50);

    /**
     * * Filling the elements in above approach is time consuiming and tedious
     * We can do it easily with a looping.
     */
    for (int i{}; i < array4_size; i++)
    {
        cout << array4_of_int[i] << "  ";
    }
    cout << endl;

    // Taking Input in an ARray
    int array5_of_int[4];
    for (int i{}; i < 4; i++)
    {
        cin >> array5_of_int[i];
    }

    // Print the array
    for (int i{}; i < 4; i++)
    {
        cout << array5_of_int[i] << "  ";
    }
    cout << endl;

    int array6_size{6};
    int array6_of_int[array6_size] = {}; // If we just add {} all the elements will be initialized with 0. just like in a varaible

    PrintTheArray(array6_of_int, array6_size);
    SolveProblem_1(array6_of_int, array6_size);
    PrintTheArray(array6_of_int, array6_size);

    return 0;
}

// Accepting array in function
void SolveProblem_1(int nums[], int size)
{
    for (int i{}; i < size; i++)
    {
        nums[i] = nums[i] + 10;
    }
}

void PrintTheArray(int nums[], int size)
{
    for (int i{}; i < size; i++)
    {
        cout << nums[i] << "\t";
    }
    cout << endl;
}