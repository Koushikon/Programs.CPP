#include<iostream.h>
#include<conio.h>
int main()
{
int var1,var2,swap;
clrscr();
cout<<"Enter Value For Frist Integer:";
cin>>var1;
cout<<"Enter Value For Secend Number: ";
cin>>var2;
cout<<"Value Before Swaping:"<<endl;

cout<<"Frist Integer="<<var1<<endl;

cout<<"Secend Integer"<<var2<<endl;
	swap=var1;
	var1=var2;
	var2=swap;

cout<<"Value After Swaping:"<<endl;

cout<<"Frist Integer"<<endl;

cout<<"Secend Integer"<<var2<<endl;

getch();
return0;
}
