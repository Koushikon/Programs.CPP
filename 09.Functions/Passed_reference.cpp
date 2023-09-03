// Function Prototype_1

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void pass_by_ref(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

int main()
{
    int num{85};
    cout << "Before Pass_by_ref. " << num << endl;
    pass_by_ref(num);
    cout << "num, After Pass_by_ref. " << num << endl;

    int another_num{21};
    cout << "Before Pass_by_ref. " << another_num << endl;
    pass_by_ref(another_num);
    cout << "another_num, After Pass_by_ref. " << another_num << endl
         << endl;

    string name{"Shopping"};
    cout << "Before Pass_by_ref2. " << name << endl;
    pass_by_ref2(name);
    cout << "name, After Pass_by_ref2. " << name << endl
         << endl;

    vector<string> lists{"Moe", "Jhon", "Duck", "Lisa"};
    cout << "Before Pass_by_ref3. ";
    print_vector(lists);
    pass_by_ref3(lists);
    cout << "lists, After Pass_by_ref3. ";
    print_vector(lists);
    return 0;
}

void pass_by_ref(int &num)
{
    num = 1000;
}

void pass_by_ref2(string &s)
{
    s = "Changeling";
}

void pass_by_ref3(vector<string> &v)
{
    // Delete all vector elements
    v.clear();
}

void print_vector(const vector<string> &v)
{
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}