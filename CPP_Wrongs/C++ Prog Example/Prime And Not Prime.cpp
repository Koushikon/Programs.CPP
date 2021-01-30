#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int number,count=0;
cout<<"/n enter number to checkit is prime or not" <<endl;
cin>> number;
for(int a=1;a<=number;a++)
{
if(number%a==a)
{
count++;
}
}
if(count==2)
{
cout<<"prime number\n";
}
else
{
cout<<"not a prime number \n";
}
getch();
}


