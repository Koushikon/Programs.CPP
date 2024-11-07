#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq1; // default is max-heap priority queue
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50); // 50, 40, 30, 20, 10

    cout << "pq1 Top element " << pq1.top() << endl;

    pq1.pop();
    pq1.pop();

    cout << "pq1 Top element " << pq1.top() << endl;
    cout << "pq1 size is " << pq1.size() << endl;

    if (pq1.empty())
    {
        cout << "pq1 is empty." << endl;
    }
    else
    {
        cout << "pq1 is not empty." << endl;
    }

    priority_queue<int> pq2;
    pq2.push(15);
    pq2.push(25);
    pq2.push(35); // 35, 25, 15

    pq2.swap(pq1);

    cout << "pq1 Top " << pq1.top() << " pq2 Top " << pq2.top() << endl;

    return 0;
}