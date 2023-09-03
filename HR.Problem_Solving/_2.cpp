/*
Given an array of integers, find the sum of its elements.
For example, if the array , , so return .

Function Description:
    Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer. simpleArraySum has the following parameter(s):
        ar: an array of integers

Input Format:
    The first line contains an integer, , denoting the size of the array.
    The second line contains  space-separated integers representing the array's elements.

Sample Input
    6
    1 2 3 4 10 11

Sample Outpu
    31
*/

#include <iostream>
using namespace std;

int main()
{

    int count {0};
    cin >> count;

    int numbers [count] {};
    long res {0};
    
    while (count) {
        
        cin>>numbers[count];
        res = res + numbers[count];
        count --;
    }
    cout<<res<<endl;
    return 0;
}