#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5];
	cout<<"Enter Array"<<endl;
	int i,j,t;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		cout<<endl;
	}
	for(i=0,j=4;i<3;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
}