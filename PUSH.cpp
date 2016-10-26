#include<iostream.h>
#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct Node
{
	int marks;
	Node *next;
}*push,*np,*newptr,*save,*top,*ptr;
Node *Create_New_Node(int);
void Push(Node*);
void POP();
void display(Node*);
void main()
{
	clrscr();
	top=NULL;
	int i,j=0;
	char c;
	do{
		cout<<endl<<"For PUSH Enter 1"<<endl;
		cout<<"For Display Enter 2"<<endl;
		cout<<"For POP Enter 3"<<endl<<"EXIT Enter 4"<<endl;
		cin>>j;
		cout<<endl;
		if(j==1)
		{
			clrscr();
			cin>>i;
		      newptr=Create_New_Node(i);
		      Push(newptr);

		}
		if(j==2)
		{
			display(top);
		}
		if(j==3)
		{
		   POP();
		}
		if(j==4)
		{
			exit(1);
		}
		cout<<endl<<"Do You Want To Continue? Y/N"<<endl;
		cin>>c;
	   }while(c=='Y'||c=='y');
	   getch();
}
Node *Create_New_Node(int n)
{
	ptr=new Node;
	ptr->marks=n;
	ptr->next=NULL;
	return ptr;
}
void Push(Node *p1)
{
	if(top==NULL)
	{
	   top=p1;
	   p1->next=NULL;
	}
	else
	{
	     save=top;
	     top=p1;
	     p1->next=save;
	}
}
void display(Node *p1)
{
	while(p1!=NULL)
	{
		cout<<p1->marks<<";";
		p1=p1->next;
	}
}
void POP()
{       ptr=top;
	save=top->next;
	top=save;
	delete ptr;
}



