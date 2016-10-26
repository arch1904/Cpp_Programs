#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *names[]={"Sachin","Kapil","Ajay","Sunil","Anil"};
	int len=0;
	len = strlen(names[1]);
	cout<<"\n Orignally string 2 is";
	cout.write(names[1],len);
	cout<<endl;
	cout<<" and string 4 is ";
	cout.write(names[3],len);
	cout<<endl;
	//exchange the positions of strings 2 and 4
	char *t;
	t=names[1];
	names[1]=names[3];
	names[3]=t;
	//print exchanged strings
	len = strlen(names[1]);
	cout<<"Exchanged string 2 is";
	cout.write(names[1],len);
	cout<<endl;
	cout<<"and string 4 is";
	cout.write(names[3],len);
	cout<<endl;
	getch();
}