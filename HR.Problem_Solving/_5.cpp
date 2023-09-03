#include<iostream>
using namespace std;

int maxout (int num1, int num2, int num3, int num4) {
    if (num1>num2 && num1>num3 && num1>num4) {
        cout<<num1;
    } else if (num2>num1 && num2>num3 && num2>num4) {
        cout<<num2;
    } else if (num3>num1 && num3>num2 && num3>num4) {
        cout<<num3;
    } else {
        cout<<num4;
    }
    return 0;
}

int main()
{
    int a,b,c,d;
    a  = b = c = d = 0;

    cin>>a>>b>>c>>d;

    maxout(a, b, c, d);
    return 0;
}