#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class student
{
public:
    int marks{};
    string name{};
    student() {}
    student(int m, string n) : marks{m}, name{n} {}
};

struct DescendingComparator
{
public:
    bool operator()(int a, int b) const
    {
        return a > b;
    }
};

class student_functor
{
public:
    bool operator()(student s1, student s2)
    {
        if (s1.marks == s2.marks)
        {
            return s1.name < s2.name;
        }
        return s1.marks > s2.marks;
    }
};

int main()
{
    // example - 1
    DescendingComparator cmp;

    cout << boolalpha << cmp(15, 10) << noboolalpha << endl;
    vector<int> arr{20, 10, 15};
    sort(arr.begin(), arr.end(), DescendingComparator());

    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    // example - 2
    student s1(97, "Gone");
    student s2(97, "Abraham");
    student_functor st_tor;
    if (st_tor(s1, s2))
    {
        cout << "s1 is first" << endl;
    }
    else
    {
        cout << "s2 is first" << endl;
    }

    return 0;
}