#include<iostream.h>
#include<conio.h>
#include<process.h>
void linear(int a[]);
void binary(int a[]);
void main()
{
	clrscr();
	int i,j,n,a[10];
	char c;
	cout<<"Input Array"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Enter "<<i+1<<" Element"<<endl;
		cin>>a[i];
		clrscr();
	}
	do{
		clrscr();
		cout<<"1 Linear Search"<<endl;
		cout<<"2 Binary Search"<<endl;
		cout<<"3 Exit"<<endl;
		cin>>n;
		if(n==1)
		{
			linear(a);
		}
		if(n==2)
		{
			binary(a);
		}
		if(n==3)
		{
			exit(1);
		}
		cout<<endl<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}
void linear(int a[])
{
	cout<<endl<<"Enter Number To Be Searched"<<endl;
	int k;
	cin>>k;
	for(int i=0;i<10;i++)
	{
	     if(a[i]==k)
	     {
		cout<<"Element Found at "<<i+1<<" Position"<<endl;
		break;
	     }
	}
}
void binary(int a[])
{
	cout<<endl<<"Enter Number To Be Searched"<<endl;
	int k;
	cin>>k;
	int start=0,end=9,mid;
	while(start!=end)
	{
		mid=(start+end)/2;
		if(k<a[mid])
		{
			end=mid-1;
		}
		if(k>a[mid])
		{
			start=mid+1;
		}
		if(k==a[mid])
		{
			start=end;
			cout<<"Element Found at "<<mid+1<<" position";
		}
	}
}

