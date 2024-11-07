#include <iostream>
using namespace std;

/**
 * * An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.
 */

int main()
{
    char vowels[5]{'a', 'e', 'i', 'o', 'u'};
    cout << "The second vowels: " << vowels[1] << '\n';

    cout << vowels[4];
    cout << '\t' << 4 [vowels];
    cout << '\t' << *(vowels + 4) << '\n';

    /**
     * * We can Access the Array elements with Subscript operator both ways
     * ? array_name[index] e.g.     arr[4]
     * ? index[array_name] e.g.     4[arr]
     * * Or with Array Dereferencing
     * ? *(arr_name + index) e.g.   *(vowels + 4)
     * @link https://stackoverflow.com/questions/41654292/understanding-this-c-array-syntax-3arr
     */
    // cin>>vowels[5]; //   Runtime error cause array out of bounds

    /**
     * * Four values of type int can be declared as an array without having to declare five different variables (each with its own identifier).
     */
    double hi_temps[]{90.1, 67.3, 33.1, 42.8};
    cout << "The second temperature: " << hi_temps[1] << endl;
    cout << "The third temperature: " << hi_temps[2] << endl;

    hi_temps[1] = 105.2;
    cout << "The updated second temperature: " << hi_temps[1] << endl;

    /*
    int test_case [5]; //   In This array declaration all values will be random.

    int test_case [5] {}; //   In this array declaration for "{}" all values will be initializzed with 0.

    int test_case [5] {100}; //   In this array declaration for "{100}" only first value will be initializzed with 100 & others with 0 because of "{}".
    */
    int test_case[5]{100, 80}; // In this array declaration for "{100, 80}" first value will be initializzed with 100, second with 80 & others with 0 because of "{}".

    cout << "\nThe first Test_case: " << test_case[0] << endl
         << "The first Test_case: " << test_case[1] << endl
         << "The first Test_case: " << test_case[2] << endl
         << "The first Test_case: " << test_case[3] << endl
         << "The first Test_case: " << test_case[4] << endl;

    cout << "\nAll Test_cases input: ";
    cin >> test_case[0] >> test_case[1] >> test_case[2] >> test_case[3] >> test_case[4];

    cout << "The first Test_case: " << test_case[0] << endl
         << "The first Test_case: " << test_case[1] << endl
         << "The first Test_case: " << test_case[2] << endl
         << "The first Test_case: " << test_case[3] << endl
         << "The first Test_case: " << test_case[4] << endl;

    cout << "\nNotice what if we just type the name: " << test_case << endl; //   The test_case value diplaying on the output is the actual memory location of this array.

    /***
     * fill() method is used to assign value to the array - 1D Array
     * 1st param: begin position of the array
     * 2nd param: end position of the array
     * 3rd param: the assigning value
     *
     * integer takes 4 bytes
     */
    int stocks[5];
    cout << "Stocks size: " << sizeof(stocks) << endl;
    cout << "Stocks no. of elements: " << (sizeof(stocks) / sizeof(int)) << endl;

    fill(stocks, stocks + 5, 50);
    cout << "\nThe stocks elements: " << stocks[0] << " " << stocks[1] << " " << stocks[2] << " " << stocks[3] << " " << stocks[4] << endl;

    fill(&stocks[0], &stocks[0] + 5, -1);
    cout << "\nThe stocks elements: " << stocks[0] << " " << stocks[1] << " " << stocks[2] << " " << stocks[3] << " " << stocks[4] << stocks[5] << endl;

    /***
     * fill() method is used to assign value to the array - 2D Array
     * 1st param: begin position of the array
     * 2nd param: end position of the array
     * 3rd param: the assigning value
     */
    int flags[3][2];
    cout << "falgs size: " << sizeof(flags) << endl;
    cout << "falgs no. of elements: " << (sizeof(flags) / sizeof(int)) << endl;
    std::fill(&flags[0][0], &flags[0][0] + (sizeof(flags) / sizeof(int)), -55);

    // Output the elements to verify the filling
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            std::cout << flags[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}