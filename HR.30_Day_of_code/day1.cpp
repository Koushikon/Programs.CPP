/*
Task: Complete the code in the editor below. The variables , , and are already declared and initialized for you. You must:

1.Declare variables: one of type int, one of type double, and one of type String. 
2.Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your variables.
3.Use the operator to perform the following operations:

    Print the sum of plus your int variable on a new line.
    Print the sum of plus your double variable to a scale of one decimal place on a new line.
    Concatenate with the string you read as input and print the result on a new line. 

Note: If you are using a language that doesn't support using
for string concatenation (e.g.: C), you can just print one variable immediately following the other on the same line. The string provided in your editor must be printed first, immediately followed by the string you read as input.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    int another_int{0}, i{4};
    double another_double{0}, d{4.2};
    string another_string{""}, s{"Hackerone "};

    cin >> another_int >> another_double;
    cin.ignore();
    getline(cin, another_string);

    // Sum of variables
    another_int = i + another_int;
    another_double = d + another_double;
    another_string = s + another_string;

    cout << "\n------------------" << endl
         << another_int << endl
         << std::setprecision(1) << fixed << another_double << endl
         << another_string << endl;

    return 0;
}