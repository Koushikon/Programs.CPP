#include <iostream>
#include <vector>

using namespace std;

void print_elements(vector<int> nums)
{
    vector<int>::iterator it = nums.begin();
    while (it != nums.end()) // little shorthand
    {
        cout << *it++ << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(12, -5);
    vector<int> v4{4, 5, 6, 7, 8};

    vector<int>::iterator it = v4.begin(); // Returns iterator that points to the first element
    cout << *it << endl;

    it++; // Now iterator points to the second element
    cout << *it << endl;

    // Return iterator that points to the past-the-end of element
    // The range includes first element but excludes the last element. Hence, the name past the end.
    // it = v4.end();
    cout << "v4 last element: " << *(v4.end() - 1) << endl;

    cout << "Size of v3 " << v3.size() << endl;
    v3.push_back(9);
    v3.push_back(19);
    cout << "Size of v3 " << v3.size() << endl;

    cout << "Front value: " << v4.front() << endl;
    cout << "Back value: " << v4.back() << endl;

    // Checks for empty vector
    if (v1.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else
    {
        cout << "Vector is not empty." << endl;
    }

    // Access vector elements
    cout << v4[2] << " " << v4[3] << " " << v4[4] << endl;          // without bound checking
    cout << v4.at(2) << " " << v4.at(3) << " " << v4.at(4) << endl; // with bound checking

    // cout << v1[8] << endl;  // Error, Segmentation fault
    // cout << v1.at(8) << endl; // Throwing std::out_of_range exception

    // size = number of elements in the vector
    // capacity = currently allocated number of elements space in the vector
    cout << "Size: " << v1.size() << " Capacity: " << v1.capacity() << endl;
    v1.push_back(10);
    v1.push_back(20);
    cout << "Size: " << v1.size() << " Capacity: " << v1.capacity() << endl;
    v1.push_back(30);
    cout << "Size: " << v1.size() << " Capacity: " << v1.capacity() << endl;

    vector<int> marks;
    cout << "Size: " << marks.size() << " Capacity: " << marks.capacity() << endl;
    marks.reserve(13);
    cout << "Size: " << marks.size() << " Capacity: " << marks.capacity() << endl;

    cout << v1.max_size() << endl;    // maximum size of the vection based on System or Library limitation
    cout << marks.max_size() << endl; // maximum size of the vection based on System or Library limitation

    marks.clear(); // Clear all the elements
    cout << "Size of marks " << marks.size() << endl;

    // Foreach loop for traversing the vector
    for (int &i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Inserts in the second position
    v1.insert(v1.begin() + 1, 15);
    v1.insert(v1.begin() + 3, 25);

    for (int &i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    v1.erase(v1.begin());                 // Removes the first element
    v1.erase(v1.end() - 4, v1.end() - 1); // Removes three elements from the last

    // Traversing the vector elements using iterator
    vector<int>::iterator it2 = v4.begin();

    while (it2 != v4.end())
    {
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    // Swapping 2 vection elements
    vector<int> e1{10, 20, 30, 40};
    vector<int> e2{5, 6};

    cout << "For e1 before: ";
    print_elements(e1);
    cout << "For e2 before: ";
    print_elements(e2);

    e1.swap(e2); // Swapping the element including their size

    cout << "For e1 after: ";
    print_elements(e1);
    cout << "For e2 after: ";
    print_elements(e2);

    return 0;
}