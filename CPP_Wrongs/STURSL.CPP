#include<iostream.h>
#include<conio.h>
class student
{
long roll_no;
char name;
public:
void input()
{
cout<<"\nEnter Student Roll_no. ";
cin>>roll_no;
cout<<"\nEnter Student Name. ";
cin>>name;
}
void output()
{
cout<<"\nRoll_No: "<<roll_no
    <<"\nName: "<<name;
}
};
class exam::public student
{
protected:
int s1,s2,s3,s4,s5,s6;
public:
void in()
{
input();
cout<<"\nEnter Subject-1 Marks: ";
cin>>s1;
cout<<"\nEnter Subject-2 Marks: ";
cin>>s2;
cout<<"\nEnter Subject-3 Marks: ";
cin>>s3;
cout<<"\nEnter Subject-4 Marks: ";
cin>>s4;
cout<<"\nEnter Subject-5 Marks: ";
cin>>s5;
cout<<"\nEnter Subject-6 Marks: ";
cin>>s6;
}
void out()
{
output();
cout<<"\nSubject-1 :-"<<s1
    <<"\nSubject-2 :-"<<s2
    <<"\nSubject-3 :-"<<s3
    <<"\nSubject-4 :-"<<s4
    <<"\nSubject-5 :-"<<s5
    <<"\nSubject-6 :-"<<s6;
}
};
class result::public exam
{
int total;
public:
void cal();
void print()
{
out();
cout<<"\nTotal Marks:- "<<total;
}
};
void result::cal()
{
in();
total=s1+s2+s3+s4+s5+s6;
}
void main()
{
result dadu;
clrscr();
dadu.cal();
dadu.print();
getch();
}