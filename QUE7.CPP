#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	int info;
	node *next;
}*front,*rear,*n,*temp;
void insert()
{
	n= new node;
	cout<<endl<<"Enter Info"<<endl;
	cin>>n->info;
	cout<<endl;
	if(front==NULL)
	{
		front=n;
		rear=n;
		n->next=NULL;
	}
	else
	{
		temp=rear;
		temp->next=n;
		rear=n;
		n->next=NULL;
	}
}
void del()
{       if(front==NULL&&rear==NULL)
	{
	    cout<<"UNDERFLOW"<<endl;
	}
	else if(front==rear&&front!=NULL)
	{
		cout<<"Last Element"<<endl;
		temp=front;
		front=front->next;
		delete temp;
	}
	else
	{
	temp=front;
	front=front->next;
	delete temp;
	}
}
void display()
{
	temp=front;
	while(temp)
	{
		cout<<temp->info<<endl;
		temp=temp->next;
	}
}
void main()
{
	int i;
	char c;
	do{
		clrscr();
		cout<<"To Insert Enter 1"<<endl;
		cout<<"To Delete Enter 2"<<endl;
		cout<<"To Display Enter 3"<<endl;
		cout<<"To Exit Enter 4"<<endl;
		cin>>i;
		cout<<endl;
		if(i==1)
		{
			insert();
		}
		if(i==2)
		{
			del();
		}
		if(i==3)
		{
			display();
		}
		if(i==4)
		{
			exit(1);
		}
		cout<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}