#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[50],start,i,j,n,size=50;
	char c;
	cout<<"Enter How Many Elements"<<endl;
	cin>>n;
	cout<<"Enter Array Elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<endl;
	}
	start=0;

	do{
		clrscr();
		cout<<"To Insert Enter 1"<<endl;
		cout<<"To Delete Enter 2"<<endl;
		cout<<"To Display Enter 3"<<endl;
		cin>>j;
		if(j==1)
		{       if(n<size)
			{
			cin>>arr[n];
			n=n+1;
			cout<<endl;
			}
			else
			{
				cout<<"ERROR"<<endl;
				break;
			}
		}
		if(j==2)
		{
			start=start+1;
		}
		if(j==3)
		{       clrscr();
			for(i=start;i<n;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		cout<<"DO YOU WANT TO CONTINUE?Y/N"<<endl;
		cin>>c;

	}while(c=='y'||c=='Y');
	getch();
}