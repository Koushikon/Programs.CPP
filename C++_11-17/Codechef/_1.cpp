#include <iostream>
using namespace std;

int main() {
	int random_no [5] {};
	
	for (int i=0;i<5;i++) {
	    cin>>random_no[i];
	}
	
	for (int i=0;i<5;i++) {
	    if (random_no[i] == 42){
	        return 0;
	    }
	    cout<<random_no[i]<<endl;    
	}
	
	return 0;
}