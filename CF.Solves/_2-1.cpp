// Reverse Integer
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		string str=to_string(n);
		reverse(str.begin(),str.end());
		n = stoi(str);
		cout<<n<<endl;
		t-- ;
	}
	return 0;
}