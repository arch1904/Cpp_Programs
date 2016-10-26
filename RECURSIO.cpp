#include<iostream.h>
#include<conio.h>
int count=0;
void fib(int a,int b)
{
	int c;
	c=a+b;
	cout<<c<<endl;
	a=b;
	b=c;
	count++;
	if(count==15)
	{

	}
	else
	fib(a,b);
}
void main()
{
	clrscr();
	int a=0,b=1;
	fib(a,b);
	getch();
}