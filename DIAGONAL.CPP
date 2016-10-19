#include<iostream.h>
#include<conio.h>
int i,j;
int sum;
void enter(int a[3][3])
{
	cout<<"Enter Matrix "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
}
void d1(int a[3][3])
{     sum=0;
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{       if(i==j)
		sum+=a[i][j];
	}
      }
}
void d2(int a[3][3])
{     sum=0;
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{       if(i+j==2)
		sum+=a[i][j];
	}
      }
}
void main()
{
	clrscr();
	int a[3][3];
	enter(a);
	cout<<endl;
	cout<<"For D1 Enter 1"<<endl<<"For D2 Enter 2"<<endl;
	int x;
	cin>>x;
	if(x==1)
	{
		d1(a);
		cout<<endl<<"Sum Is "<<sum<<endl;
	}
	if(x==2)
	{
		d2(a);
		cout<<endl<<"Sum Is "<<sum<<endl;
	}
	getch();
}