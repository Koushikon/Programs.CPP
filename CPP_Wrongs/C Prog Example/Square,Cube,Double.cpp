#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int a,r1,r2,r3;
printf("Enter any number");
scanf("%d",&a);
r1=a*a;
r2=a*a*a;
r3=a*2;
printf("\nSquare is %d",r1);
printf("\nCube is %d",r2);
printf("\nDouble is %d",r3);
getch();
}