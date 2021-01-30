#include<iostream.h>
#include<conio.h>

class A                  //Example of Multiple Inheritance to Call Base
{			 // Class Constuctor to Derived Class Constructor
public:
A()
{
cout<<"\n A's Constructor Called \n";
}
};

class B
{
public:
B()
{
cout<<"\n B's Constructor Called \n";
}
};

class C:public A,public B
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
C c;
getch();
}