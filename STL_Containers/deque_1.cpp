#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d1;
    deque<int> d2(5, 100);               // set the elements to 100
    deque<int> d3(d2.begin(), d2.end()); // initialize with another deque

    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(15);
    d1.push_back(25);
    d1.push_back(35);

    cout << "d1 Size " << d1.size() << endl;
    cout << "Front " << d1.front() << " Back " << d1.back() << endl;

    d1.pop_back();
    d1.pop_back();
    d1.pop_front();
    d1.pop_front();

    cout << "d1 Size " << d1.size() << endl;
    cout << "Front " << d1.front() << " Back " << d1.back() << endl;

    if (d1.empty())
    {
        cout << "d1 is empty." << endl;
    }
    else
    {
        cout << "d1 is not empty." << endl;
    }

    // Traversing the deque using iterator
    deque<int>::iterator it = d2.begin();

    while (it != d2.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << "d1 Size is " << d1.size() << ", 1st el " << d1[0] << " " << d1[1] << endl;

    return 0;
}