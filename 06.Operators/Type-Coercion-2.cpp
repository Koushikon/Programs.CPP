// C++ type coercion another example
#include <iostream>
using namespace std;

int main()
{
    int total{}, num1{}, num2{}, num3{};
    const int count{3};
    cout << "Enter 3 integer value: ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;

    double average{0.0};
    // The older way to convert variable data type
    // average = (double)total / count;
    average = static_cast<double>(total) / count;
    cout << "Entered 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl
         << "The Sum of those numbers are: " << total << endl
         << "The average is: " << average << endl;
    return 0;
}