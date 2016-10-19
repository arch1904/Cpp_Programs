#include<iostream.h>
#include<conio.h>
#include<stdio.h>
char * match(char c,char *s)
{
	while((c!=*s)&&(*s))
	s++;
	return(s);
}
void main()
{
	clrscr();
	char string[80],*cp,ch;
	cout<<"Enter A String(Max 80 Characters)"<<endl;
	cin.getline(string,80);
	cout<<endl<<"Enter a Character to be searched for "<<endl;
	cin>>ch;
	cp=NULL;
	cp=match(ch,string);
	if(*cp)
	{
		cout<<endl;
		for(;*cp!='\0';cp++)
		cout<<*cp;
	}
	else
	{
		cout<<"No match found!"<<endl;
		cout<<endl;
	}
	getch();
}
