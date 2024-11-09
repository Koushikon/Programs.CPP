#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> first{1, 2, 3, 4, 5};
    vector<int> second{3, 4, 5, 6, 7};

    // set_union function
    cout << "set_union function : " << endl;
    vector<int> result;
    set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    for (int &item : result)
    {
        cout << item << " ";
    }
    cout << endl;

    // set_union function
    cout << "set_union function : " << endl;
    vector<int> result2;
    set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result2, result2.begin()));

    for (int &item : result2)
    {
        cout << item << " ";
    }
    cout << endl;

    // set_difference function
    cout << "set_difference function : " << endl;
    vector<int> result3;
    set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result3, result3.begin()));

    for (int &item : result3)
    {
        cout << item << " ";
    }
    cout << endl;

    vector<int> result4;
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result4, result4.begin()));

    for (int &item : result4)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}