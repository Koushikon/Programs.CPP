#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g;
clrscr();
cout<<"Enter 1st no"<<endl;
cin>>a;
cout<<"Enter 2nd no"<<endl;
cin>>b;
cout<<"Press 1 for ADD,2 for MINUS,3 for MULTIPLY,4 for DEVIDED"<<endl;
cout<<"Enter your choice.."<<endl;
cin>>g;
switch(g)
{
case 1:
c=a+b;
cout<<"TOTAL.."<<c<<endl;
break;
case 2:
d=a-b;
cout<<"MINUS.."<<d<<endl;
break;
case 3:
e=a*b;
cout<<"MULTIPLY.."<<e<<endl;
break;
case 4:
f=a/b;
cout<<"DEVIDED.."<<f<<endl;
break;
default:
cout<<"Invalid input"<<endl;
}
getch();
}