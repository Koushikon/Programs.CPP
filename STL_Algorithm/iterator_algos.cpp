#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void print_double(int a)
{
    cout << 2 * a << " ";
}

bool check_even(int number)
{
    return number % 2 == 0;
}

void left_Shift(vector<int> arr)
{
    cout << "Before: ";
    for (int &a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    // left shift rotate
    rotate(arr.begin(), arr.begin() + 2, arr.end());

    cout << "After: ";
    for (int &a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
}

void right_shift(vector<int> arr)
{
    cout << "Before: ";
    for (int &a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    // right shift rotate
    rotate(arr.rbegin(), arr.rbegin() + 3, arr.rend());

    cout << "After: ";
    for (int &a : arr)
    {
        cout << a << " ";
    }
    cout << endl;
}

int main()
{
    // for_each
    vector<int> nums1{10, 21, 30, 40, 51, 60};

    cout << "for_each function : " << endl;
    for_each(nums1.begin(), nums1.end(), print_double);
    cout << endl;

    // find function
    int target{20};
    cout << "find function : " << endl;
    auto it = find(nums1.begin(), nums1.end(), target);
    cout << *it << endl;

    // find_if
    cout << "find_if function : " << endl;
    it = find_if(nums1.begin(), nums1.end(), check_even); // first even value
    cout << *it << endl;

    // count function
    cout << "count function : " << endl;
    target = 11;
    int ans = count(nums1.begin(), nums1.end(), target);
    cout << ans << endl;

    // count_if
    cout << "count_if function : " << endl;
    ans = count_if(nums1.begin(), nums1.end(), check_even);
    cout << ans << endl;

    // sort function
    cout << "sort function : " << endl;
    sort(nums1.begin(), nums1.end());

    for (int &item : nums1)
    {
        cout << item << " ";
    }
    cout << endl;

    // reverse function
    cout << "reverse function : " << endl;
    vector<int> nums2{5, 6, 2, 1, 3, 9};
    reverse(nums2.begin(), nums2.end());

    for (int &item : nums2)
    {
        cout << item << " ";
    }
    cout << endl;

    // rotate function - Left
    cout << "rotate left function : " << endl;
    vector<int> nums3{1, 2, 3, 4, 5, 6, 7};
    rotate(nums3.begin(), nums3.begin() + 3, nums3.end());

    for (int &item : nums3)
    {
        cout << item << " ";
    }
    cout << endl;

    // rotate function - Right
    cout << "rotate right function : " << endl;
    vector<int> nums4{1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate(nums4.rbegin(), nums4.rbegin() + 2, nums4.rend());

    for (int &item : nums4)
    {
        cout << item << " ";
    }
    cout << endl;

    // unique function
    cout << "unique function : " << endl;
    vector<int> nums5{4, 5, 5, 6, 7, 7, 9, 9}; // Remove duplicates from a sorted range
    auto it5 = unique(nums5.begin(), nums5.end());
    nums5.erase(it5, nums5.end());

    for (int &item : nums5)
    {
        cout << item << " ";
    }
    cout << endl;

    // partition function
    cout << "partition function : " << endl;
    vector<int> nums6{10, 11, 12, 13, 14, 15, 17};
    auto it6 = partition(nums6.begin(), nums6.end(), check_even);

    cout << "True means even elements before the iterator elements ";
    auto it7 = nums6.begin();
    while (it7 != it6)
    {
        cout << *it7 << " ";
        it7++;
    }
    cout << endl;

    cout << "False means even elements after the iterator elements ";
    while (it6 != nums6.end())
    {
        cout << *it6 << " ";
        it6++;
    }
    cout << endl;

    vector<int> arr1{10, 20, 30, 40, 50, 60};
    left_Shift(arr1); // left shift

    vector<int> arr2{10, 20, 30, 40, 50, 60};
    right_shift(arr2); // right shift

    return 0;
}