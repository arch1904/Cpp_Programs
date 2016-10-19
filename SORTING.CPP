#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5] = {7,6,5,4,3};
	int i,j;
	int t;
       for(j=0;j<5;j++)
       {
		for(i=0;i<5;i++)
		{
			if(a[i]>a[i+1])
			{
			 t=a[i];
			 a[i]=a[i+1];
			 a[i+1]=t;
			}
		}
	}
       int max=a[0];
	for(i=1;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}

	for(i=0;i<4;i++)
	{
		cout<<a[i]<<" ";

	}
	cout<<max;
	getch();
}

