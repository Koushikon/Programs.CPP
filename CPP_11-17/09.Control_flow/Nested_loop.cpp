#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Example- 1 with Array
    // int oneD{5}, twoD{3};
    // int grid[oneD][twoD]{};

    // for (size_t row{}; row < oneD; ++row)
    // {
    //     for (size_t col{}; col < twoD; ++col)
    //         grid[oneD][twoD] = 1000;
    // }

    // for (size_t row{}; row < oneD; ++row)
    // {
    //     for (size_t col{}; col < twoD; ++col)
    //         cout << grid[oneD][twoD] << " ";
    //     cout << endl;
    // }

    // Example- 2 with Vector
    vector<vector<int>> vector_2d{
        {2, 5, 7},
        {17, 25, 36, 42},
        {111, 222, 333, 444, 555},
        {73, 95, 39, 51}};

    for (auto vec_1 : vector_2d)
    {
        for (auto vec_2 : vec_1)
            cout << vec_2 << " ";
        cout << endl;
    }
    return 0;
}