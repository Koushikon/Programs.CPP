#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Student
{
    long roll_no;
    string name;

public:
    void InputInfo();
    void OutputInfo();
};

void Student::InputInfo()
{
    cout << "\nEnter Student Roll_no. ";
    cin >> roll_no;
    cout << "\nEnter Student Name. ";
    cin >> name;
}

void Student::OutputInfo()
{
    cout << "\nRoll_No: " << roll_no << "\nName: " << name;
}

class Exam : public Student
{
protected:
    int s1, s2, s3, s4, s5, s6;

public:
    void InputMarks();
    void OutputMarks();
};

void Exam::InputMarks()
{
    InputInfo();
    cout << "\nEnter Subject-1 Marks: ";
    cin >> s1;
    cout << "\nEnter Subject-2 Marks: ";
    cin >> s2;
    cout << "\nEnter Subject-3 Marks: ";
    cin >> s3;
    cout << "\nEnter Subject-4 Marks: ";
    cin >> s4;
    cout << "\nEnter Subject-5 Marks: ";
    cin >> s5;
    cout << "\nEnter Subject-6 Marks: ";
    cin >> s6;
}

void Exam::OutputMarks()
{
    OutputInfo();
    cout << "\nSubject-1 : " << s1
         << "\nSubject-2 : " << s2
         << "\nSubject-3 : " << s3
         << "\nSubject-4 : " << s4
         << "\nSubject-5 : " << s5
         << "\nSubject-6 : " << s6;
}

class Result : public Exam
{
    int total;

public:
    void Calculate();
    void Print();
};

void Result::Calculate()
{
    InputMarks();
    total = s1 + s2 + s3 + s4 + s5 + s6;
}

void Result::Print()
{
    OutputMarks();
    cout << "\nTotal Marks: " << total << endl;
}

int main()
{
    Result s1;
    s1.Calculate();
    s1.Print();
    return 0;
}