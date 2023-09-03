// Reverse Integer
#include <iostream>
using namespace std;

int main() {
	// % = modulo or mod operator
    int t;
	cin >> t;
	while(t--)
	{
	    long n;
	    cin >> n;
	   long res = 0;
	    while(n)
	    {
	        int temp = n%10;
	       	res = res*10 + temp;
	        n = n/10;
	    }
		cout<<res<<endl;
	}
	return 0;
}