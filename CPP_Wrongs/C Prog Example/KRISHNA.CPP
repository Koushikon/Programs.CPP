#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter Any Character:");
scanf("%c",& ch);

if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')

printf("Is A Vowel Character",ch);
else
printf("%c Is Not A Vowel Character",ch);
getch();
return0;
}
