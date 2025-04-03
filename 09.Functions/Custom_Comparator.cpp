#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/***
 * Comparator Using Function Pointer
 */

// Using IsLesser Custom Comparator to Sort the elements in Increasing Order
bool IsLesserFun(int &a, int &b)
{
    return a < b;
}

// Using IsGreater Custom Comparator to Sort the elements in Decreasing Order
bool IsGreaterFun(int &a, int &b)
{
    return a > b;
}

/***
 * Comparator Using Functor (Function Object)
 */

struct SComparator
{
    bool operator()(int &a, int &b)
    {
        return a > b;
    }
};

/***
 * Function Object with State (Using a Class)
 */

class CComparator
{
    int _baseValue;

public:
    CComparator(int baseValue) : _baseValue(baseValue) {};

    bool operator()(int &a, int &b)
    {
        return (a % _baseValue) > (b % _baseValue);
    }
};

void display(vector<int> &nums)
{
    for (int &item : nums)
    {
        cout << item << "\t";
    }
    cout << endl;
}

int main()
{
    vector<int> numbers1{4, 7, 2, 3, 6, 5, 4};
    cout << "Original Elements Order" << endl;
    display(numbers1);

    /***
     * Comparator Using Function Pointer
     */

    // sort(numbers1.begin(), numbers1.end()); // default is Increasing
    // sort(numbers1.begin(), numbers1.end(), IsLesserFun);
    sort(numbers1.begin(), numbers1.end(), IsGreaterFun);

    cout << "In Decreasing Order" << endl;
    display(numbers1);
    cout << endl;

    /***
     * Comparator Using Lambda Expression
     */
    vector<int> numbers2{14, 10, 55, 81, 42, 25, 15, 25};
    cout << "Original Elements Order" << endl;
    display(numbers2);

    // Using sort() with a lambda function
    sort(numbers2.begin(), numbers2.end(), [](int a, int b)
         {
             // Custom comparison logic
             return a > b; // this sorts in ascending order
         });

    cout << "In Decreasing Order" << endl;
    display(numbers2);
    cout << endl;

    /***
     * Comparator Using Functor (Function Object)
     */
    vector<int> numbers3{15, 10, 5, 6, 8, 12, 14, 19, 18};
    cout << "Original Elements Order" << endl;
    display(numbers3);

    sort(numbers3.begin(), numbers3.end(), SComparator());

    cout << "In Decreasing Order" << endl;
    display(numbers3);
    cout << endl;

    /***
     * Function Object with State (Using a Class)
     */
    vector<int> numbers4{25, 10, 6, 21, 18, 23, 41, 29, 28, 17};
    cout << "Original Elements Order" << endl;
    display(numbers4);

    // Sorting the data by decreasing order by reminder of 5
    sort(numbers4.begin(), numbers4.end(), CComparator(5));

    cout << "In Decreasing Order" << endl;
    display(numbers4);
    cout << endl;

    return 0;
}