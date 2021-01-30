#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("\n ENTER MARKS");
scanf("%d",&a);
if(a>599)
printf("\n star");
else if(a>450)
if(a<600)
printf("\n 1st division");
else if(a>380)
if(a<450)
printf("\n 2nd division");
else if(a>280)
if(a<380)
printf("\n 3rd division");
else
printf("\n fail");
getch();
return ;
}
