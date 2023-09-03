#include <iostream>
#include <array>

using std::array;
using std::cin;
using std::cout;
using std::endl;

// Actual array size
const int ARR_SIZE{11};

// Function Prototype
void display_array(const array<int, ARR_SIZE> &nums);
int binary_search(const array<int, ARR_SIZE> &nums, const int &target, int low, int high);

int main()
{
    array<int, ARR_SIZE> arr{2, 5, 7, 10, 13, 14, 16, 19, 27, 30, 110};

    display_array(arr);

    int user_data{};
    cout << "Enter the element to be seach: ";
    cin >> user_data;

    int low{0};
    int high{(int)arr.size() - 1};

    int result{-1};
    result = binary_search(arr, user_data, low, high);

    if (result != -1)
        cout << "Element " << user_data << " found at position: " << result + 1 << endl;
    else
        cout << "Element " << user_data << " Not Found..." << endl;

    return 0;
}

/**
 * * Binary Seach Implementation
 * !Recurrsive Approach
 * @param nums is the array of elements
 * @param target is the seached element
 * @param low is the beggining position of the array
 * @param high is the size of the array
 */

int binary_search(const array<int, ARR_SIZE> &nums, const int &target, int low, int high)
{
    if (high >= low)
    {
        cout << ".\n";

        int mid{};

        mid = low + (high - low) / 2;
        if (nums.at(mid) == target)
            return mid;
        else if (nums.at(mid) < target)
            // low = mid + 1;
            return binary_search(nums, target, mid + 1, high);
        else
            // high = mid - 1;
            return binary_search(nums, target, low, mid - 1);
    }
    return -1;
}

void display_array(const array<int, ARR_SIZE> &nums)
{
    for (const int &val : nums)
        cout << val << ' ';
    cout << '\n';
}