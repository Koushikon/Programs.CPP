#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    // accumulate function
    cout << "accumulate function : " << endl;
    vector<int> nums1{10, 20, 30, 40, 50};
    int start_value{1};
    int total_sum = accumulate(nums1.begin(), nums1.end(), start_value);
    cout << "total sum " << total_sum << endl;

    // inner_product function
    cout << "inner_product function : " << endl;
    vector<int> nums2{5, 6, 7};
    vector<int> nums3{1, 2, 3}; // (5 x 1) + (6 x 2) + (7 x 3) = 38
    start_value = 2;
    int ans = inner_product(nums2.begin(), nums2.end(), nums3.begin(), start_value);
    cout << ans << endl;

    // partial_sum function
    cout << "partial_sum function : " << endl;
    vector<int> nums4{10, 20, 30, 40};
    vector<int> result(nums4.size());
    partial_sum(nums4.begin(), nums4.end(), result.begin()); // 10, 30, 60, 100

    for (int &item : result)
    {
        cout << item << " ";
    }
    cout << endl;

    // iota function
    vector<int> nums5(5);
    start_value = 50;
    iota(nums5.begin(), nums5.end(), start_value);

    for (int &item : nums5)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}