#include <iostream>

using namespace std;

class student
{
public:
    int marks{};
    string name{};
    student() {}
    student(int m, string n) : marks{m}, name{n} {}
};

class functor_one
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

class student_functor
{
public:
    bool operator()(student s1, student s2)
    {
        return s1.marks > s2.marks;
    }
};

int main()
{
    // example-1
    functor_one cmp;
    if (cmp(10, 5))
    {
        cout << "First one is greater." << endl;
    }
    else
    {
        cout << "second one is greater." << endl;
    }

    // example-2
    student s1(67, "jonah");
    student s2(69, "jonah");
    student_functor st_tor;
    if (st_tor(s1, s2))
    {
        cout << "s2 get less marks than s1." << endl;
    }
    else
    {
        cout << "s1 get less marks than s2." << endl;
    }

    return 0;
}