#include<iostream.h>
#include<conio.h>
int *big(int &,int &);
void main()
{
	clrscr();
	int a,b,*c;
	cout<<"Enter Two Integers \n";
	cin>>a>>b;
	c=big(a,b);
	cout<<"The bigger value is"<<*c<<"\n";
	getch();

}
int *big(int &x,int &y)
{
	if(x>y)
	{
		return(&x);
	}
	else
	{
		return(&y);
	}
}
