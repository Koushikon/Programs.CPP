#include<iostream.h>
#include<conio.h>
#include<math.h>
class root
{
int a,b,c;
float x1,x2,d;
public:
void input();
void cal();
};
void root::input()
{
cout<<"\nEnter Value for A: ";
cin>>a;
cout<<"\nEnter Value for B: ";
cin>>b;
cout<<"\nEnter Value for C: ";
cin>>c;
}
void root::cal()
{
d=b*b-4*a*b*c;
if(d<0)
	{
	cout<<"\nRoots in Imaginary Form";
	return;
	}
else
	{
	d=sqrt(d);
	x1=(-b+d)/(2*a);
	x2=(-b-d)/(2*a);
	cout<<"\nX1= "<<x1<<"\nX2= "<<x2;
	}
}
void main()
{
root r;
clrscr();
r.input();
r.cal();
getch();
}