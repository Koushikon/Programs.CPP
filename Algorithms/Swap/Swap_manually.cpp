// C++ Program to swap two numbers and characters (Without using temp)
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Prototypes
void take_input(int &num1, int &num2);
void take_input(double &dbl1, double &dbl2);
void take_input(char &chr1, char &chr2);
void swap_values(int &num1, int &num2);
void swap_values(double &dbl1, double &dbl2);
void swap_values(char &chr1, char &chr2);

void swap_values(int &num1, int &num2)
{
    cout << "Before swaping : " << num1 << " and " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "After swaping : " << num1 << " and " << num2 << endl;
}

void swap_values(double &dbl1, double &dbl2)
{
    cout << "Before swaping : " << dbl1 << " and " << dbl2 << endl;
    dbl1 = dbl1 + dbl2;
    dbl2 = dbl1 - dbl2;
    dbl1 = dbl1 - dbl2;
    cout << "After swaping : " << dbl1 << " and " << dbl2 << endl;
}

void swap_values(char &chr1, char &chr2)
{
    cout << "Before swaping : " << chr1 << " and " << chr2 << endl;
    chr1 = chr1 + chr2;
    chr2 = chr1 - chr2;
    chr1 = chr1 - chr2;
    cout << "After swaping : " << chr1 << " and " << chr2 << endl;
}

void take_input(int &num1, int &num2)
{
    cout << "Enter two numbers by space: ";
    cin >> num1 >> num2;
}

void take_input(double &dbl1, double &dbl2)
{
    cout << "Enter two double by space: ";
    cin >> dbl1 >> dbl2;
}

void take_input(char &chr1, char &chr2)
{
    cout << "Enter two character by space: ";
    cin >> chr1 >> chr2;
}

int main()
{
    int a{}, b{};
    char x{}, y{};
    double m{}, n{};

    cout << "Numbers:" << endl;
    take_input(a, b);
    swap_values(a, b);

    cout << "Double:" << endl;
    take_input(m, n);
    swap_values(m, n);

    cout << "Characters:" << endl;
    take_input(x, y);
    swap_values(x, y);

    return 0;
}