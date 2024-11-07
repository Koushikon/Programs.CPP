#include<iostream>

using namespace std;

/*

5. Debug the code. It is trying to print the given pattern.

Output Pattern:
N = 4
1
21
321
4321

#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<n;i--){
       int p;
        for(j=1;j<n;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}
*/

int main(){
    int i, j, n;
    cin >> n;

    for(i = 1; i <= n; i++){
        int p = i;

        for(j = 0; j < i; j++){
          cout << p;
          p--;
        }
        cout << endl;        
    }
}