#include<iostream.h>
#include<conio.h>
int main()
{
char character;
cout<<"Enter A Character:";
cin>>character;
int storeAscii=character;
cout<<"The ASCII Value Of"<<character<<"Is"<<storeAscii;

if(storeAscii>=65&& storeAscii<=90)
{
cout<<"\n You Have Entered A Capital Letter";
}
else if(storeAscii>=97&& storeAscii<=122)
{
cout<<"\n You Have A Small Letter";
}
else if(storeAscii>=47&& storeAscii<=57)
{
cout<<"\n You Have Entered A Digit";
}


else if(storeAscii>=0 && storeAscii>47||storeAscii>=54 && storeAscii<=64||storeAscii>=91 && storeAscii<=96||storeAscii>=123 && storeAscii<=127)
{
cout<<"\n You Have Entered A Special Character";
}
getch();
return0;
}
