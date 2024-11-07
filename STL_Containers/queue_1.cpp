#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30); // 10, 20, 30

    cout << "q1 Size: " << q1.size() << endl;

    q1.pop(); // 20, 30

    if (q1.empty())
    {
        cout << "q1 is empty.";
    }
    else
    {
        cout << "q1 is not empty.";
    }

    cout << "Font element: " << q1.front() << endl;
    cout << "Back element: " << q1.back() << endl;

    queue<int> q2;
    q2.push(15);
    q2.push(25);
    q2.push(35);

    q2.swap(q1);

    cout << "q1 Front: " << q1.front() << " q1 Back: " << q1.back() << endl;
    cout << "q2 Front: " << q2.front() << " q2 Back: " << q2.back() << endl;

    return 0;
}