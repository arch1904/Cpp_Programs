#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	int info;
	node *next;
}*start,*newptr,*save,*ptr;
node * Create_New_Node(int);
void Insert_Beg(node*);
void Display(node*);
void main()
{
	clrscr();
	start=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		clrscr();
		cout<<"\n Enter INFOrmation for the new code...";
		cin>>inf;
		cout<<"\n Creating New Node!! Press Enter to continue...";
		system("pause");
		newptr=Create_New_Node(inf);
		if(newptr!=NULL)
		{
			cout<<"\n \n New Node Created Successfully. Press Enter To Continue...";
			system("pause");
		}
		else
		{
			cout<<"\n Cannot create new node!!! Aborting!!\n";
			system("pause");
			exit(0);
		}
		cout<<"\n\nNow Inserting this node in the beginning of list...\n";
		cout<<"Press Enter to continue...\n";
		system("pause");
		Insert_Beg(newptr);
		cout<<"\nNow the list is :\n";
		Display(start);
		cout<<"\n Press Y to enter more nodes,N to exit....\n";
		cin>>ch;
	}
	getch();
}
node*Create_New_Node(int n)
{
	ptr=new node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}
void Insert_Beg(node*np)
{
	if(start==NULL)
	start=np;
	else
	{
		save=start;
		start=np;
		np->next=save;
	}
}
void Display(node*np)
{
	while(np!=NULL)
	{
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!\n";
}
