#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,a,top,j;
	cout<<"Enter How Many Elements"<<endl;
	cin>>j;
	char c;
	for(i=0;i<j;i++)
	{
		cin>>arr[i];
		cout<<endl;
	}
	top=j;
	do
	{
		cout<<endl<<"Do You Wish To POP Enter 1?"<<endl;
		cout<<"Display? Enter 2"<<endl;
		cin>>a;
		cout<<endl;
		if(a==1)
		{
			--top;
		}
		if(a==2)
		{
			for(i=0;i<top;i++)
			{
				cout<<arr[i]<<";";
			}
		}
		cout<<"Do You Wish To Continue?Y/N"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
}


