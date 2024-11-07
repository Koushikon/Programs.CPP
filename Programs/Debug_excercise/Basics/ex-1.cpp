#include <iostream>

using namespace std;

/*
1. Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

#include<iostream>
using namespace std;

int main() {
    char c;
    cin>>c;
    if('a'<=c || c<= 'z'){
        cout<<0;
    }
    else if('A'<=c || c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}
*/

/***
 * The wrong thing about this program is in the if and else if condition
 * It says if a's ASCII is less than provided character ASCII value or provided character ASCII is less than z's ASCII value
 * But the problem is with OR any values greater than the a's ASCII value will print 0 is result it will not check the second condition.
 * Same is for the else if condition.
 */

int main()
{
    char c;
    cin >> c;
    if ('a' <= c && c <= 'z')
    {
        cout << 0;
    }
    else if ('A' <= c && c <= 'Z')
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
}