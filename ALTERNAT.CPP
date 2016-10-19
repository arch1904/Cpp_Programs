#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	int a[5][5];
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			cin>>a[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}

	for(i=0;i<5;i++)
	{
		if(i%2==0)
		{       for(j=0;j<5;j=j+2)
			{
			cout<<a[i][j];
			cout<<"\t";
			}

		}
		else
		{       for(j=1;j<5;j=j+2)
			{
			cout<<a[i][j];
			cout<<"\t";
			}
		}
		cout<<endl;
	}

	getch();
}