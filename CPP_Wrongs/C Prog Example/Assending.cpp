#include<stdio.h>
#include<conio.h>
void main()
{
int i ,j,a,n,number[60];

printf("enter the value of N \n");
scanf("%d",n);
printf("enter the  Numbers \n");
for (i=0;i<n;++i)
scanf("%d",&number[i]);
 for (i=0;i<n;++i)

 {
  for (i=0;i<n;++i)
{
if(number[i]> number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the numbers arranged in ascending order are given below\n");
for(i=0;i<n;++i)
printf("%d\n",number[i]);
getch();
}