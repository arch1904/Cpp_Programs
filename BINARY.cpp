#include<iostream.h>
#include<conio.h>
void binary(int x)
	{     int r,i=0,arr[4];
		for(i=0;i<4;i++)
		{	arr[i]=0;
		}
		i=0;
	      do{
		       r=x%2;
		       x=x/2;
		       arr[i]=r;
		       i++;
		}while(i<4);
		cout<<"Binary Equivalent is  ";
		for(i=3;i>=0;i--)
		{
		      cout<<arr[i];
		}

	}
void main()
{
	clrscr();
	int x;
	cout<<"Enter Number to be converted to binary"<<endl;
	cin>>x;
	cout<<endl;
	binary(x);
	getch();
}