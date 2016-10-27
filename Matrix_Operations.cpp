#include<iostream>
using namespace std;
int i,j,k;
void enter(int a[3][3],int b[3][3])
{
	cout<<"Enter Matrix A "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter Matrix B "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
}
void add(int a[3][3],int b[3][3],int c[3][3])
{
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
      }
}
void sub(int a[3][3],int b[3][3],int c[3][3])
{
     for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]-b[i][j];
	}
      }
}
void display(int c[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j]<<"\t ";
		}
		cout<<endl;
	}
}
void multiply(int a[3][3],int b[3][3],int c[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}

int main()
{
	system("clear");
	int a[3][3];
	int b[3][3];
	int c[3][3];
	enter(a,b);
	cout<<endl<<"To ADD Enter 1"<<endl<<"To Subtract Enter 2"<<endl<<"To Multiply Enter 3"<<endl;
	int x;
	cin>>x;
	if(x==1)
	{
		add(a,b,c);
		display(c);
	}
	if(x==2)
	{
		sub(a,b,c);
		display(c);
	}
	if(x==3)
	{
		multiply(a,b,c);
		display(c);
	}
}