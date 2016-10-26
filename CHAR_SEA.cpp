#include<iostream.h>
#include<conio.h>
char *match(char c,char *s)
{
	while(c!=*s)
	{    if(!s)
		{
			break;
		}
	     s++;
	}
	return s;
}
void main()
{
	clrscr();
	cout<<"The String Is Hello World"<<endl;
	char *c={"Hello World"};
	cout<<"Enter The Part To Be Searched"<<endl;
	char a;
	cin>>a;
	cout<<endl;
	char *cp;
       cp=match(a,c);
       cout<<"The Required Result Is  "<<cp;
	getch();
}
