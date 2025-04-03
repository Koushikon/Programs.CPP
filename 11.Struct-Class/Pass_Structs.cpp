#include <iostream>

using namespace std;

/*
Learn from: https://www.learncpp.com/cpp-tutorial/passing-and-returning-structs/

*/

struct Employee
{
    int id{};
    string name{};
    double wage{};
};

struct Point3D
{
    int x{};
    int y{};
    int z{};
};

void print_student(int id, string name, double marks)
{
    cout << "Id - > " << id << endl;
    cout << "Name - > " << name << endl;
    cout << "Marks - > " << marks << endl;
}

void print_employee(const Employee &emp)
{
    cout << "Id - > " << emp.id << endl;
    cout << "Name - > " << emp.name << endl;
    cout << "Wage - > " << emp.wage << endl;
}

Point3D GetLocation()
{
    Point3D loc{7, 5, 59};
    return loc;
}

Point3D GetLocationAutoDeduct()
{
    return {3, 33, 333};
    // return {}; // with no value
}

void print_location(const Point3D &point)
{
    cout << "X - > " << point.x << endl;
    cout << "Y - > " << point.y << endl;
    cout << "X - > " << point.z << endl;
}

int main()
{
    int s_id{11};
    string s_name{"Koushik"};
    double s_marks{7.5};

    print_student(s_id, s_name, s_marks);

    // Creating struct objects
    Employee joe{7, "Joe", 75000};
    Employee carmel{8, "Carmel", 75000};

    print_employee(joe);
    print_employee(carmel);

    // construct a temporary Employee to pass to function (type explicitly specified) (preferred)
    print_employee(Employee{9, "Lucky", 89000.75});
    // construct a temporary Employee to pass to function (type deduced from parameter)
    print_employee({10, "Chicky", 90000.00});

    // return structs
    Point3D p1{GetLocation()};
    Point3D p2{GetLocationAutoDeduct()};

    print_location(p1);
    print_location(p2);

    return 0;
}