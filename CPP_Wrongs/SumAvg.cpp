#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
    float a,b,c,x=0;
    cout<<"Enter first digit: "<<endl;
    cin>>a;
    cout<<"Enter second digit: "<<endl;
    cin>>b;
    cout<<"Enter third digit: "<<endl;
    cin>>c;\

    if(x<=0){
        float sum=a+b+c;
        float avg=sum/3;
        cout<<"The Sum: "<<sum<<" : The Average: "<<avg;
    }
    system("Pause");
    getch();
}