#include <iostream>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <vector>
#include <list>
#include <iterator>
#include <forward_list>

using namespace std;

int main()
{
    vector<string> language{"Python", "C++", "C#", "JavaScript"};
    vector<string>::iterator it;

    cout << "iterator ++ operator " << endl;
    for (it = language.begin(); it != language.end(); it++)
    {
        cout << *it << " | ";
    }
    cout << endl;

    cout << "iterator -- operator " << endl;
    it = language.end();
    while (it != language.begin())
    {
        it--;
        cout << *it << ", ";
    }
    cout << endl;

    // 1. input iterator (readonly, forward moving)
    // 2. output iterator (write only, forward moving)
    cout << "input, output iterator " << endl;
    istringstream str("0.11 0.22 0.33 0.44");

    partial_sum(istream_iterator<double>(str),
                istream_iterator<double>(),
                ostream_iterator<double>(cout, ", "));
    cout << '\n';

    // 3. forward iterator (read/write only, forward moving)
    cout << "forward iterator " << endl;
    forward_list<int> nums1{1, 2, 3, 4};

    // initialize an iterator to point
    // to beggining of a forward list
    forward_list<int>::iterator itr = nums1.begin();

    while (itr != nums1.end()) // reading and writting values
    {
        (*itr) = (*itr) * 7;
        cout << *itr << ", ";
        itr++;
    }
    cout << endl;

    // 4. Bi-directional iterator (read/write, forward/backward moving)
    cout << "Bi-directional iterator " << endl;
    list<int> nums2{5, 6, 7, 8, 9, 10};
    list<int>::iterator itr2 = nums2.begin();

    while (itr2 != nums2.end()) // reading and writting values, forward
    {
        (*itr2) = (*itr2) * 2;
        cout << *itr2 << ", ";
        itr2++;
    }
    cout << endl;

    list<int> nums3{5, 6, 7, 8, 9, 10};
    itr2 = nums3.end();
    while (itr2 != nums3.begin()) // reading and writting values, backward
    {
        itr2--;
        (*itr2) = (*itr2) * 2;
        cout << *itr2 << ", ";
    }
    cout << endl;

    // 5. random access iterator (read/write, forward/backward moving, random access)
    cout << "random access iterator " << endl;
    vector<int> nums4{5, 6, 7, 8, 9, 10};
    vector<int>::iterator it_first = nums4.begin();
    vector<int>::iterator it_last = nums4.end() - 1;
    vector<int>::iterator it_middle = nums4.begin() + 3;

    cout << *it_first << endl;
    cout << *it_last << endl;
    cout << *it_middle << endl;

    return 0;
}