#include<iostream>

using namespace std;

/*

Debug the code. It is trying to print the given pattern.

Output Pattern:
N = 4
1
22
333
4444

#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}
*/

int main()
{
    int i, j, n;
    // cin >> n;
    n = 6;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < i + 1; j++)
        {
	        cout << i + 1;
        }
        cout << endl;
    }
}