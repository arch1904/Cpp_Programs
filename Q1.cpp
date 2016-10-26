//Insert and Delete
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
struct Node
{
	int info;
	Node *next;
}*start,*rear,*ptr,*newptr,*np,*save;
Node *create(int);
void insert(Node*);
void display(Node*);
void del();
void main()
{
	clrscr();
	int i,j,n;
	char c;
	start=rear=NULL;
	do{     clrscr();
		cout<<"To Insert Enter 1"<<endl;
		cout<<"To Delete Enter 2"<<endl;
		cout<<"To Display Enter 3"<<endl;
		cout<<"To Exit Enter 4"<<endl;
		cin>>j;
		cout<<endl;
		if(j==1)
		{
			cout<<"Enter Info"<<endl;
			cin>>n;
		       newptr=create(n);
		       if(newptr==NULL)
		       {
				cout<<"EXITING"<<endl;
				exit(1);
		       }
		       insert(newptr);
		}
		if(j==2)
		{
			del();
		}
		if(j==3)
		{
			display(start);

		}
		if(j==4)
		{
			exit(1);
		}
		cout<<"Do You Want To Continue? Y/N"<<endl;
		cin>>c;
		cout<<endl;
	}while(c=='y'||c=='Y');
	getch();
}
Node *create(int a)
{
       np=new Node;
	np->info=a;
	np->next=NULL;
	return np;
}
void insert(Node *p1)
{
    if(start==NULL)
    {
	start=rear=p1;
	p1->next=NULL;
    }
    else
    {
	 rear->next=p1;
	 rear=p1;
	 rear->next=NULL;
    }
}
void display(Node *np)
{	while(np!=NULL)
       {
		cout<<np->info<<endl;
		np=np->next;
       }
}
void del()
{
	save=start;
	start=start->next;
	delete save;
}




