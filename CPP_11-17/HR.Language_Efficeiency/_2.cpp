/*
Objective
In this challenge, we practice reading input from stdin and printing output to stdout.
In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:
    string s;
    int n;
and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:
    cin >> s >> n;
This reads the first word ("High") from stdin and saves it as string s, then reads the second word ("5") from stdin and saves it as integer n. If we want to print these values to stdout, separated by a space, we write the following code:
    cout << s << " " << n << endl;
This code prints the contents of string s, a single space (""), then the integer n. We end our line of output with a newline using endl. This results in the following output:
    High 5

Task
    Read 3 numbers from stdin and print their sum to stdout.

Input Format
    One line that contains 3 space-separated integers: a, b, and c

Output Format
Print the sum of the three numbers on a single line.

Sample Input
    1 2 7

Sample Output
    10

Explanation
The sum of the three numbers is 1+2+7=10.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[3]{}, sum{};
    for (unsigned i{}; i <= 2; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum;
    return 0;
}
