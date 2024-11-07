#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> myList1;          // list declaration with size 0 of int type
    list<int> myList2{1, 2, 3}; // list declaration with values of int type

    myList2.push_back(10); // Adds element on the last
    myList2.push_back(20);

    myList2.push_front(10); // Adds element on the first
    myList2.push_front(20);

    myList1.push_back(11);
    myList1.push_front(11);

    cout << "myList1 Size: " << myList1.size() << endl;
    cout << "myList2 Size: " << myList2.size() << endl;

    // Traversing the list using Foreach
    for (int &i : myList2)
    {
        cout << i << " ";
    }
    cout << endl;

    for (int &i : myList1)
    {
        cout << i << " ";
    }
    cout << endl;

    myList1.clear();

    cout << "myList1 Size: " << myList1.size() << endl;
    cout << "myList2 Size: " << myList2.size() << endl;

    if (myList1.empty()) // Checks for empty or not
    {
        cout << "myList1 is empty." << endl;
    }
    else
    {
        cout << "myList1 is not empty." << endl;
    }

    cout << "First value: " << myList2.front() << " Last value: " << myList2.back() << endl;

    // Traversing the list using iterator
    list<int>::iterator it = myList2.begin();

    while (it != myList2.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    list<int> list1{10, 20, 30, 40, 50, 60};

    cout << "Size of list1: " << list1.size() << endl;
    list1.remove(30);
    list1.remove(40);
    cout << "Size of list1: " << list1.size() << endl;

    it = list1.begin();
    while (it != list1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    list1.insert(list1.begin(), 21);
    list1.insert(list1.begin(), 51);

    it = list1.begin();
    while (it != list1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    list1.erase(list1.begin());
    list1.erase(list1.begin(), list1.end());

    cout << "Size of list1: " << list1.size() << endl;

    list<int> e1 = {10, 20, 30, 40, 50};
    list<int> e2 = {1, 2, 3};

    e1.swap(e2);

    it = e1.begin();
    cout << "e1 list elements: ";
    while (it != e1.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    it = e2.begin();
    cout << "e2 list elements: ";
    while (it != e2.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}