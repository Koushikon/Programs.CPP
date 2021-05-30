#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::max_element;
using std::min_element;
using std::vector;

int main()
{
    int arr_numbers[]{7, 10, 15, 99, -3, 6, 2};
    vector<int> vec_numbers{7, 10, 15, 99, -3, 6, 2};

    // Size of array and vector
    cout << sizeof(arr_numbers) / sizeof(arr_numbers[0]) << endl
         << vec_numbers.size() << endl;

    int result{};
    // Show Max element
    cout << *max_element(arr_numbers, arr_numbers + 7) << endl;
    cout << *max_element(vec_numbers.begin(), vec_numbers.end()) << endl;
    // Show Min element
    cout << *min_element(arr_numbers, arr_numbers + 7) << endl;
    cout << *min_element(vec_numbers.begin(), vec_numbers.end()) << endl;

    return 0;
}