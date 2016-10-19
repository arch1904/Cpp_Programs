#include<iostream.h>
#include<conio.h>
int temp;
void swap(int *x, int *y)
{
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"Swapped "<<endl<<"a= "<<*x<<endl<<"b= "<<*y<<endl;
}
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter a ";
	cin>>a;
	cout<<endl<<"Enter b ";
	cin>>b;
	cout<<endl;
	swap(&a,&b);
	getch();
}

