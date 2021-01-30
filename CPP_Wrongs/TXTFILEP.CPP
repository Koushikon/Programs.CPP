//C++ Program for Text File//

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
void main()
{
char name[]=" Go......On ";
clrscr();
int len=strlen(name);

fstream file;
file.open("text",ios::app|ios::out);

for(int i=0;i<len;i++)
	{
	file.put(name[i]);
	}

getch();
}