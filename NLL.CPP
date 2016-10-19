#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	int info;
	node *next;
}*start,*end,*temp,*n,*del,*d;
void insert()
{
	n=new node;
	cout<<"Enter DATA"<<endl;
	cin>>n->info;
	cout<<"Where Do You Want To Insert The Node?"<<endl;
	cout<<" For TOP enter 1"<<endl;
	cout<<"For Rear Enter 2"<<endl;
	int n;
	cin>>n;
	if(n==1)
	{
		if(top==NULL)
		{
			top=n;
			n->next=NULL;
		}
		else
		{
			n->next=top;
			top=n;
		}
	}
	if(n==2)
	{
		if(end==NULL)
		{
			end=n;
			n->next=NULL;
		}
		else
		{
			temp=end;
			temp->next=n;
			end=end->next;
			n->next=NULL;
		}
	}
}
void del()
{
     cout<<"Enter Value to be deleted"<<endl;
     int i;
     cin>>i;
	temp=top;
	while(temp)
	{  d=temp->next;
		if(temp->info=i)
		{
			break;
		}
		else
			temp=temp->next;
	}
     d->next=temp->next;
     delete temp;
}
void display()
{
	temp=top;
	while(temp)
	{
		cout<<temp->info<<endl;
	}
}
void main()
{
	clrscr();
	top=NULL;
	end=NULL;
	int j;
	char c;
	do{
		clrscr();
		cout<<"For Insertion Enter 1"<<endl;
		cout<<"For Deletion Enter 2"<<endl;
		cout<<"For Display Enter 3"<<endl;
		cout<<"To Exit Enter 4"<<endl;
		cin>>j;
		if(j==1)
		{
			insert();
		}
		if(j==2)
		{
			del();
		}
		if(j==3)
		{
			display();
		}
		if(j==4)
		{
			exit(1);
		}
		cout<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}

