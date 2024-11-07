#include <iostream>

using namespace std;

/*
2. Debug the code. It is trying to print the given pattern.

Output Pattern:
1
23
345
4567

#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    while(i<n){
        int j = i,count = 1;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
*/

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = i, count = 1;
        while (count <= i)
        {
            cout << j;
            j = j + 1;
            count = count + 1;
        }
        cout << "\n";
        i = i + 1;
    }
}