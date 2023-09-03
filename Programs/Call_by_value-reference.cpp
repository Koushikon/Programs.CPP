#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Declare simple variables
    int first{};
    double second{};

    // Declare reference of previous variables (first, second).
    int &start = first;
    double &end = second;

    first = 5;
    cout << "Value of first : " << first << endl;
    cout << "\t& first's reference, i.e. start : " << start << endl;

    second = 11.7;
    cout << "Value of second : " << second << endl;
    cout << "\t& second's reference, i.e. end : " << end << endl;
    return 0;
}
