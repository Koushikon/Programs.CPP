 //All Working Perfect But Total Per Grade Not Show in Output//

#include<stdio.h>
#include<conio.h>
struct student_record
{
char *name,grade;
int sub1,sub2,sub3,sub4,sub5,total;
float per;
};
typedef struct student_record stu;
void append(stu *s,FILE *ptr)
{
printf("\nEnter Name: ");
scanf("%8s",s->name);

printf("\nSubject 1 Marks: ");
scanf("%d",s->sub1);

printf("\nSubject 2 Marks: ");
scanf("%d",s->sub2);

printf("\nSubject 3 Marks: ");
scanf("%d",s->sub3);

printf("\nSubject 4 Marks: ");
scanf("%d",s->sub4);

printf("\nSubject 5 Marks: ");
scanf("%d",s->sub5);

s->total=s->sub1+s->sub2+s->sub3+s->sub4+s->sub5;

s->per=s->total/5.0;

if(s->per>90)
s->grade='AA';
else
	{
	if(s->per>75)
	s->grade='A';
	else
		{
		if(s->per>60)
		s->grade='B';
		else
			{
			if(s->per>40)
			s->grade='C';
			else
			s->grade='D';
			}
		}
	}

fprintf(ptr,"%8s%3d%3d%3d%3d%3d%3d%5.2f%c",s->name,s->sub1,s->sub2,s->sub3,s->sub4,s->sub5,s->total,s->per,s->grade);

}

void read (stu *s,FILE *ptr)
{
fscanf(ptr,"%8s%3d%3d%3d%3d%3d%3d%5.2f%c",s->name,s->sub1,s->sub2,s->sub3,s->sub4,s->sub5,s->total,s->per,s->grade);

}

void main()
{
stu s;
char filename[10];
FILE *fp;
int n,ch;
clrscr();

printf("\nEnter Filename: ");
scanf("%s",filename);

fp=fopen(filename,"a");
do
{

append(&s,fp);
printf("Students %s is Appendent.\n",s.name);

printf("\nDo you want to add another student record: \n 1 for Contunie - \n 0 for Exit - \n ->");
scanf("%d",&ch);

}while(ch==1);

n=ftell(fp);

while(ftell(fp)<n)
{
read(&s,fp);
}

fclose(fp);

getch();
}