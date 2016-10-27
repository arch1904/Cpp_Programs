#include<iostream>
using namespace std;
void linear(int a[]);
void binary(int a[]);
int main()
{
	system("clear");
	int i,j,n,a[10];
	char c;
	cout<<"Input Array"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Enter "<<i+1<<" Element"<<endl;
		cin>>a[i];
		system("clear");
	}
	do{
		system("clear");
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

