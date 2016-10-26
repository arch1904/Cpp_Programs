#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct Node
{
	int info;
	Node *next;
}*start,*newptr,*save,*ptr,*rear;
Node*Create_New_Node(int);
void Insert_End(Node*);
void Display(Node*);
int main()
{
	clrscr();
	start=rear=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		clrscr();
		cout<<"\n Enter Information for the new node...";
		cin>>inf;
		cout<<"\n Creating New Node!! Press Enter to continue..";
		system("pause");
		newptr=Create_New_Node(inf);
		if(newptr!=NULL)
		{
			cout<<"\n\nNew Node Created Successfully. Press Enter To Continue..";
			system("Pause");
		}
		else
		{
			cout<<"\n Cannot Create New Node Aborting!!\n";
			system("Pause");
			exit(1);
		}
		cout<<"\n\n Now inserting this node in the end of the list..\n";
		cout<<"Press Enter To Continue...\n";
		system("pause");
		Insert_End(newptr);
		cout<<"\nNow the list is :\n";
		Display(start);
		cout<<"\n Press Y to enter more nodes,N to exit..\n";
		cin>>ch;
	}
	getch();
	return 0;
}
Node*Create_New_Node(int n)
{
	ptr=new Node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}
void Insert_End(Node*np)
{
	if(start==NULL)
		start=rear=np;
	else
	{
		rear->next=np;
		rear=np;
	}
}
void Display(Node*np)
{
	while(np!=NULL)
	{
		cout<<np->info<<" ->";
		np=np->next;
	}
	cout<<"!!!\n";
}

