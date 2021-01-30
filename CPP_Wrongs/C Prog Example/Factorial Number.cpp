#include<stdio.h>
#include<conio.h>
int main()
{
int c,n,fact=1;
clrscr();
printf("\nenter a number to calculate it's factorial\n");
scanf("%d",&n);
for(c=1;c<=n;c++)
fact=fact*c;
printf("factorial of %d=%d\n",n,fact);
getch();
return 0;
}