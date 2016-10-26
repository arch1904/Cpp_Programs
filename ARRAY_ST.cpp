#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int i,a[10],top=-1,j;
	char c;
	do
	{
		clrscr();
		cout<<"1 to Insert and element"<<endl;
		cout<<"2 to Delete an element"<<endl;
		cout<<"3 to Display"<<endl;
		cout<<"4 to exit"<<endl;
		cin>>i;
		if(i!=4)
		{
			if(i==1)
			{
			   cout<<endl;
			   top++;
			   cin>>a[top];

			}
			if(i==2)
			{
				top--;
			}
			if(i==3)
			{
				for(j=top;j>=0;j--)
				{
					cout<<endl<<a[j];
				}
			}
		}
		if(i==4)
		{
			exit(1);
		}
		cout<<endl<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}
