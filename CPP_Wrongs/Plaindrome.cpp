#include<iostream.h>
#include<conio.h>
int main()
{
int palindrome,reverse=0;
clrscr();
cout<<"Enter Number:";
cin>>palindrome;
int num=0,key=palindrome;
for(int i=1;palindrome!=0;i++)
{
num=palindrome=palindrome%10;
palindrome=palindrome/10;
reverse=num+(reverse*10);
}
if(reverse==key)
{
cout<<key<<"Is A Plaindrome Number";
}
else
{
cout<<key<<"Is Not A Plaindrome Number";
}
getch();
return0;
}
