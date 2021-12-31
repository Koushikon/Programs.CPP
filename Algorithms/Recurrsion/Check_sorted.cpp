#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::endl;

// Actual array size
const int ARR_SIZE{7};

// Function Prototype
void display_array(const array<int, ARR_SIZE> &nums);
bool check_sorted_unsorted(const array<int, ARR_SIZE> &nums, int &&index);

int main()
{
    array<int, ARR_SIZE> arr1{7, 9, 10, 12, 15, 17, 21};
    array<int, ARR_SIZE> arr2{5, 2, 1, 6, 9, 3, 4};

    bool result{false};
    result = check_sorted_unsorted(arr1, 1);
    cout << "- This above Array is " << ((result) ? "Sorted." : "Unsorted.") << endl;

    return 0;
}

/**
 * * Check for Wheather the array is Sorted or not.
 * ! By reccursion method
 * @param nums is the array,
 * @param index is the current position.
 */

bool check_sorted_unsorted(const array<int, ARR_SIZE> &nums, int &&index)
{
    display_array(nums);
    // if (nums.size() >= index)
    //     return true;
    if (nums.at(index) < nums.at(index - 1))
        return false;
    return (nums.size() >= index) ? true : check_sorted_unsorted(nums, index++);
}

void display_array(const array<int, ARR_SIZE> &nums)
{
    for (const int &val : nums)
        cout << val << ' ';
}