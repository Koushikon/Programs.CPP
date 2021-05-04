// Function Prototype_1

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void pass_by_value(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

int main()
{
    int num{85};
    cout << "Before Pass_by_value. " << num << endl;
    pass_by_value(num);
    cout << "num, After Pass_by_value. " << num << endl;

    int another_num{21};
    cout << "Before Pass_by_value. " << another_num << endl;
    pass_by_value(another_num);
    cout << "another_num, After Pass_by_value. " << another_num << endl
         << endl;

    string name{"Shopping"};
    cout << "Before Pass_by_value2. " << name << endl;
    pass_by_value2(name);
    cout << "name, After Pass_by_value2. " << name << endl
         << endl;

    vector<string> lists{"Moe", "Jhon", "Duck", "Lisa"};
    cout << "Before Pass_by_value3. ";
    print_vector(lists);
    pass_by_value3(lists);
    cout << "lists, After Pass_by_value3. ";
    print_vector(lists);
    return 0;
}

void pass_by_value(int num)
{
    num = 100;
}

void pass_by_value2(string s)
{
    s = "changing";
}

void pass_by_value3(vector<string> v)
{
    // Delete all vector elements
    v.clear();
}

void print_vector(vector<string> v)
{
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}