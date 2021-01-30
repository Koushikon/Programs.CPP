#include<stdio.h>
#include<conio.h>
int main()
{
int year;
clrscr();
printf("\n ENTER A YEAR TO CHEAK IF IT IS LEAP YEAR\n");
scanf("%d",&year);
if (year%400==0)
printf("%d is a leap year.\n",year);
else if(year%100==0)
printf("%d is not a leap year.\n",year);
else if(year%4==0)
printf("%d is aleap year.\n",year);
else
printf("%d is not a leap year.\n",year);
getch();
return 0;
}
