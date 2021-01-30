/** [Dec-16(S)->1.b] *Write a C++ Program To Create A Class "Number" With
A Constructor To Initialize The Object of "Nember" Class With Integer Value.
Define Number Functions to Find The Square Of A Number And For Desplaying It. **/

#include<iostream.h>
#include<conio.h>
class Number
{
int a;
public:
Number(int x)
{
a=x;
}
square()
{
int s=a*a;
cout<<"\n\nThe Square Value of ->"<<a<<" is->"<<s;
}
};
void main()
{
Number n(9);
clrscr();
n.square();
getch();
}