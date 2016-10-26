#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[]={40,20,50,100};
	int i,spos=0,j,temp;
	for(i=0;i<3;i++)
	{
		spos=i;
		for(j=i+1;j<4;j++)
		{
			if(a[spos]>a[j])
			{
				spos=j;
			}
		}
		temp=a[spos];
		a[spos]=a[i];
		a[i]=temp;
	}
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
}