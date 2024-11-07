#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int nums[]{10, 20, 20, 30, 20, 40, 30};

    unordered_set<int> s1;
    unordered_set<int> s2(nums, nums + size(nums));
    unordered_set<int> s3(s2);

    s1.insert(10);
    s1.insert(15);
    s1.insert(10);
    s1.insert(15);
    s1.insert(20);

    // Traversing the set using iterator
    unordered_set<int>::iterator it = s1.begin();

    while (it != s1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << "s1 Size " << s1.size() << endl;
    s1.clear();
    cout << "s1 Size " << s1.size() << endl;

    if (s1.empty())
    {
        cout << "s1 is empty." << endl;
    }
    else
    {
        cout << "s1 is not empty." << endl;
    }

    // Traversing the set using iterator
    it = s2.begin();

    while (it != s2.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    s2.erase(30);
    s3.erase(s3.begin());
    s2.erase(s2.begin(), s2.end());

    if (s3.find(20) != s3.end())
    {
        cout << "element found." << endl;
    }

    if (s3.count(30) == 0)
    {
        cout << "item not found." << endl;
    }
    else
    {
        cout << "item found." << endl;
    }

    return 0;
}