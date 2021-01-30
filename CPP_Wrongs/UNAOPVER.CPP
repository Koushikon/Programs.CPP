#include<iostream.h>
#include<conio.h>
class abc
{
int a,b,c;
public:
abc()   //Default Constractor
{}
abc(int x,int y,int z)  //Parameter Contractor
{
a=x;
b=y;
c=z;
}
void operator - ()
{
a=-a;
b=*b;
c=-c;
}
void output()
{
cout<<"\nA= "<<a
    <<"\nB= "<<b
    <<"\nC= "<<c;
}
~abc()   //Destractor
{
cout<<"\nObject Destroyed\n";
}
};
void main()
{
abc y(11,22,33);
clrscr();
-y;
y.output();
getch();
}
