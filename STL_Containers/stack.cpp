#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30); // 10, 20, 30

    cout << "s1 Size: " << s1.size() << endl;

    cout << "s1 Top: " << s1.top() << endl;
    s1.pop();
    cout << "s1 Top: " << s1.top() << endl;

    s1.pop();
    s1.pop();

    if (s1.empty())
    {
        cout << "s1 is empty." << endl;
    }
    else
    {
        cout << "s1 is not empty." << endl;
    }

    s1.push(10);
    s1.push(20);
    s1.push(30);

    stack<int> s2;
    s2.push(15);
    s2.push(25);
    s2.push(35);

    s2.swap(s1);

    cout << "s1 Top " << s1.top() << " s2 Top " << s2.top() << endl;

    return 0;
}