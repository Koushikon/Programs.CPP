#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // make_heap function
    cout << "make_heap function : " << endl;
    vector<int> nums1{10, 22, 40, 15, 66};
    make_heap(nums1.begin(), nums1.end());

    for (int &item : nums1)
    {
        cout << item << " ";
    }
    cout << endl;

    // push_heap function
    cout << "push_heap function : " << endl;
    nums1.push_back(55);
    push_heap(nums1.begin(), nums1.end());

    for (int &item : nums1)
    {
        cout << item << " ";
    }
    cout << endl;

    // pop_heap function
    cout << "pop_heap function : " << endl;
    pop_heap(nums1.begin(), nums1.end());
    nums1.pop_back();

    for (int &item : nums1)
    {
        cout << item << " ";
    }
    cout << endl;

    // sort_heap function
    cout << "sort_heap function : " << endl;
    sort_heap(nums1.begin(), nums1.end());

    for (int &item : nums1)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}