#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // max, min function
    cout << "max, min function" << endl;
    int first{10};
    int second{15};
    cout << "max " << max(first, second) << endl;
    cout << "min " << min(first, second) << endl;

    // min_element function
    cout << "min_element function" << endl;
    vector<int> nums1{10, 20, 30, 40, 50};
    auto it = min_element(nums1.begin(), nums1.end());
    cout << *it << endl;

    // max_element function
    cout << "max_element function" << endl;
    auto it2 = max_element(nums1.begin(), nums1.end());
    cout << *it2 << endl;

    return 0;
}