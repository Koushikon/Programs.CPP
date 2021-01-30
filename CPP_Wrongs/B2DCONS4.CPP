#include<iostream.h>
#include<conio.h>

class A                  //Example of Hiararchical Inheritance to Derived
{			 // Class Constuctor to Base Class Constructor
public:
A()
{
cout<<"\n A's Constructor Called \n";
}
};

class B:public A
{
public:
B()
{
cout<<"\n B's Constructor Called \n";
}
};

class C:public A
{
public:
C()
{
cout<<"\n C's Constructor Called \n";
}
};

int main()
{
clrscr();
B b;
cout<<"\n\n";
C c;
getch();
}