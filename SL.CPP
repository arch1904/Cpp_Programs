#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[]={30,50,10,40};
	int i,j,min,l,t;
	for(i=0;i<4;i++)
	{       min=a[i];
		l=i;
		for(j=i;j<4;j++)
		{
		     if(a[j]<min)
		     {
			min=a[j];
			l=j;
		     }
		}
		t=a[i];
		a[i]=a[l];
		a[l]=t;
	}
       for(i=0;i<4;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
}