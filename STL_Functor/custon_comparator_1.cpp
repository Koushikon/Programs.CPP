#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct DescendingComparator
{
public:
    bool operator()(int a, int b) const
    {
        return a > b;
    }
};

int main()
{
    DescendingComparator cmp;

    // cout << cmp(15, 10) << endl;

    vector<int> arr{20, 10, 15};
    sort(arr.begin(), arr.end(), DescendingComparator());

    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}