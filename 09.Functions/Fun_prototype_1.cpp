// Function Prototype_1

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// Function Prototype
int take_input();
int add_numbers(int a, int b);
void display(int a, string b);

int main()
{
    int one{}, two{};
    one = take_input();
    two = take_input();

    int sum{};
    sum = add_numbers(one, two);
    string set{"The Printing Result"};

    display(sum, set);
    // Passing C-Style String Literal,It will be converted Then Display
    display(sum, "Nothing to show");

    return 0;
}

int add_numbers(int a, int b)
{
    return a + b;
}

int take_input()
{
    int num{};
    cin >> num;

    return num;
}

void display(int a, string b)
{
    cout << b << " is a Sum = " << a << endl;
}