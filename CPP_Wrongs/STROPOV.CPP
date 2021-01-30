//Add 2 Strings Using Operator Overloading//

#include<iostream.h>
#include<conio.h>
#include<string.h>
class str
{
char a[20];
public:

str()
{}

str(char x[])
{
	strcpy(a,x);
}

str(str &x)
{
	strcpy(a,x.a);
}

str operator+(str z)
{
	str p;
	strcpy(p.a,a);
	strcat(p.a,z.a);
	return(p);
}

void print()
{
	cout<<"\n Enter String is: "<<a;
}

~str()
{}
};

void main()
{
str x("Joy Ma"),y("Kali"),z;
clrscr();
z=x+y;
z.print();
getch();
}