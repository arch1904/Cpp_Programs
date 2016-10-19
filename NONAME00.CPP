#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	char ch;
	cin>>ch;
	for(i=65;i<=90;i++)
	{
		if(ch==i)
		{
			ch=ch+32;
			cout<<ch;
		}
}
	for(i=97;i<=122;i++)
	{
		if(ch==i)
		{
			ch=ch-32;
			cout<<ch;
		}
	}

	getch();
}