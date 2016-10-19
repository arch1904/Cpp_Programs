#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct Node
{
	int info;
	Node *next;
}*start,*rear,*newptr;
Node *create(int n);
void insert(Node*);
void display(Node*);
void del();
void main()
{
	clrscr();
	int
	const int n=20;
	int i,j,count,a;
	char c;
	do{     start=rear=NULL;
		clrscr();
		cout<<endl<<"TO INSERT ENTER 1"<<endl;
		cout<<"To Delete Enter 2"<<endl;
		cout<<"To Display Enter 3"<<endl;
		cout<<"To EXIT Enter 4"<<endl;
		cin>>a;
		cout<<endl;
		if(a==1)
		{
		     cout<<"Enter Info"<<endl;
		     cin>>j;
		     cout<<endl;
		     newptr=create(j);
		     insert(newptr);
		     count++;
		}
		if(a==2)
		{
			del();
			count--;
		}
		if(a==3)
		{
			display(start);
		}
		if(a==4)
		{
			exit(1);
		}
		cout<<endl<<"Do You Want To Continue?Y/N"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}
Node*create(int n)
{
	newptr=new Node;
	newptr->info=n;
}
void insert(Node *np)
{
       if(start==NULL)
       {
	start=rear=np;
	np->next=NULL;
       }
       else
       if(
