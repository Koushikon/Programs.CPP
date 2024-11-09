#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // all data needs to be sorted before use
    // binary_search function
    cout << "binary_search function : " << endl;
    vector<int> nums1{10, 20, 30, 40, 50};
    int target{40};
    bool result = binary_search(nums1.begin(), nums1.end(), target);
    cout << target << " is " << (result ? "found." : "not found.") << endl;

    // lower_bound function
    cout << "lower_bound function : " << endl;
    auto it = lower_bound(nums1.begin(), nums1.end(), 40);
    cout << *it << endl;

    // lower_bound function
    cout << "lower_bound function : " << endl;
    it = upper_bound(nums1.begin(), nums1.end(), 40);
    cout << *it << endl;

    // equal_range function
    cout << "equal_range function : " << endl;
    vector<int> nums2{10, 10, 30, 30, 30, 100, 10, 300, 300, 70, 70, 80};
    sort(nums2.begin(), nums2.end());
    pair<vector<int>::iterator, vector<int>::iterator> it2;
    it2 = equal_range(nums2.begin(), nums2.end(), 30);
    cout << "30 is presnet from index " << (it2.first - nums2.begin()) << " to " << (it2.second - nums2.begin()) << endl; // line (4 - 0) to (7 - 0) = 4 to 7

    return 0;
}