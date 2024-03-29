/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
    The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.
Output Format
    Print the required answer on a single line.

Note
    String S consists of lowercase English Alphabets only.

SAMPLE INPUT 
    aba
SAMPLE OUTPUT 
    YES
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str{};
    getline(cin, str);

    for (int i = 97; i <= 122; i++)
        cout << char(i) << " ";

    return 0;
}