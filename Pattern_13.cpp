#include<iostream>
int i,j,sum1=0,sum2=0,sum3=0,sum4=0;
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
void t1(int a[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j<3)
			{
				sum1+=a[i][j];
			}
		}
	}
}
void t2(int a[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j>3)
			{
			   sum2+=a[i][j];
			}
		}
	}
}
void t3(int a[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>=j)
			{
				sum3+=a[i][j];
			}
		}
	}
}
void t4(int a[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j>=i)
			{
				sum4+=a[i][j];
			}
		}
	}
}
int main()
{
	system("clear");
	int a[3][3];
	enter(a);
	t1(a);
	t2(a);
	t3(a);
	t4(a);
	int sum;
	sum=sum1+sum2+sum3+sum4;
	cout<<endl<<"The Sum Of The Four Triangles Is "<<sum;
	getch();
}