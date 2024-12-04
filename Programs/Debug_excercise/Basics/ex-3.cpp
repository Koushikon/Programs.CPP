
/*
3. Debug the code. It is trying to print the given pattern.

Output Pattern:
N = 4
   *
  ***
 *****
*******

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int gaps = (n - i - 1), k = 0;
        while (k < gaps)
        {
            cout << " ";
            k = k + 1;
        }

        int m = 0, ch = 2 * i + 1;
        while (m < ch)
        {
            cout << "*";
            m = m + 1;
        }

        cout << "\n";
        i = i + 1;
    }
}