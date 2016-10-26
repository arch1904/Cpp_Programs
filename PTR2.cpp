#include<iostream.h>
#include<conio.h>
float &max(float &x , float &y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
void main()
{
	clrscr();
	float a,b;
	cout<<"Enter a ";
	cin>>a;
	cout<<endl<<"Enter b ";
	cin>>b;
	cout<<endl;
	max(a,b)=100;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	getch();
}