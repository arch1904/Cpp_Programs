#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int i,j,a[10],top=0,end=0;
	char c;
	do
	{
		clrscr();
		cout<<"To Insert Enter 1"<<endl;
		cout<<"To Delete Enter 2"<<endl;
		cout<<" To Display Enter 3"<<endl;
		cin>>i;
		if(i==1)
		{
			cin>>a[end];
			end++;
		}
		if(i==2)
		{
			top++;
		}
		if(i==3)
		{
			for(j=top;j<end;j++)
			{
				cout<<endl<<a[j];
			}
		}
		cout<<endl<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}
