#include <iostream>
#include <queue>

using namespace std;

class student
{
public:
    int marks{};
    string name{};
    student() {}
    student(int m, string n) : marks{m}, name{n} {}
};

class Comparator
{
public:
    bool operator()(student s1, student s2)
    {
        if (s1.marks == s2.marks)
        {
            return s1.name < s2.name;
        }
        return s1.marks < s2.marks;
    }
};

int main()
{
    // For priority_queue last element is the top element
    priority_queue<student, vector<student>, Comparator> pq;
    pq.push(student(90, "ABC"));
    pq.push(student(59, "Lac"));
    pq.push(student(27, "ADF"));
    pq.push(student(99, "DEC"));
    pq.push(student(82, "GOR"));

    cout << "Top Student name " << pq.top().name << " and marks " << pq.top().marks << endl;

    return 0;
}