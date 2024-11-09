#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // creates min-heap
    priority_queue<int, vector<int>, greater<int>> pq1;

    // pq2, pq3 are the same after compilation - default is less
    // creates max-heap
    priority_queue<int> pq2;
    priority_queue<int, vector<int>, less<int>> pq3;

    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50); // 50, 40, 30, 20, 10

    cout << "pq1 size is " << pq1.top() << " pq1 top element is " << pq1.top() << endl;

    pq1.pop();
    pq1.pop();

    cout << "pq1 size is " << pq1.top() << " pq1 top element is " << pq1.top() << endl;

    if (pq1.empty())
    {
        cout << "pq1 is empty." << endl;
    }
    else
    {
        cout << "pq1 is not empty." << endl;
    }

    priority_queue<int, vector<int>, greater<int>> pq4;
    pq4.push(15);
    pq4.push(25);
    pq4.push(35); // 35, 25, 15

    pq4.swap(pq1);

    cout << "pq1 Top element " << pq1.top() << " pq4 Top element " << pq4.top() << endl;

    return 0;
}