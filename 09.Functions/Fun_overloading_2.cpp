#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void print(int = 100);
void print(double = 100.5);
void print(string);
void print(string, string);
void print(vector<string>);

int main()
{
    // Error, Compiler Doesn't know which one to use.
    // So, It gives an Error.
    // print();

    // int function
    print(100);

    // Character will be promoted to int according to their ASCII.
    print('A');

    // double function
    print(123.5);
    // Promoted to double
    print(123.5F);

    //string function
    // Converted to C++ string
    print("C-Style String");

    // C++ String
    string s{"C++ Language"};
    print(s);

    // vector of string function
    vector<string> tree{"Moe", "Bob", "Bela", "Vishal"};
    print(tree);

    return 0;
}

void print(int num)
{
    cout << "Printing " << num << endl;
}

void print(double num)
{
    cout << "Printing " << num << endl;
}

void print(string s)
{
    cout << "Printing " << s << endl;
}

void print(string s, string v)
{
    cout << "Printing " << s << " and " << v << endl;
}

void print(vector<string> v)
{
    cout << "Ptinting ";
    for (auto s : v)
        cout << s + " ";
    cout << endl;
}