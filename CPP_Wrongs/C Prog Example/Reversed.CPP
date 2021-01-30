#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,rev=0;
clrscr();
printf("\n\n Enter Any Number to be Reversed:");
scanf("%d",&num);
while(num>=1)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("\n\n Reversed number:%d",rev);
getch();
}