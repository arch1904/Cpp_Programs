#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int info;
	Node *next;
}*start,*np,*newptr,*ptr,*rear;
Node *Create_New_Node(int n);
void Insert_New_Node(Node *);
void Display(Node *);
void Del();
int main()
{       start=rear=NULL;
	system("clear");
	int a;
	char c;
	char ch='y';
	int inf;
	while(ch=='y'||ch=='Y')
	{
		system("clear");
		cout<<endl<<"Enter info"<<endl;
		cin>>inf;
		cout<<endl<<"Creating New Node"<<endl;
		newptr=Create_New_Node(inf);
		if(newptr==NULL)
		{
			cout<<endl<<"ABORTING"<<endl;
			exit(1);
		}
		else
		{
			cout<<endl<<"Creation Succesful"<<endl;
			Insert_New_Node(newptr);
		 }

		 cin>>ch;
	}
	do{
			cout<<endl<<"To Display Enter 1"<<endl;
			cout<<endl<<"To Delete Enter 2"<<endl;
			cin>>a;
			if(a==1)
			{
				Display(start); /* yahaan per error tha start aana tha */

			}
			else if(a==2)
			{
				Del();
			}
			cout<<endl<<"Do You Want To Continue y//n"<<endl;
			cin>>c;
		 }while(c=='y'||c=='Y');
 }
Node *Create_New_Node(int n)
{
	np=new Node;
	np->info=n;
	np->next=NULL;
	return np;
}
void Insert_New_Node(Node *np)
{
	if(start==NULL)
	{
		start=rear=np;
	}
	else
	{
	rear->next=np;
	rear=np;
	}
}
void Display(Node *np)
{
	while(np!=NULL)
	{
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!!!"<<endl;
}
void Del()
{
       if(start==NULL)
       {
		cout<<endl<<"Underflow"<<endl;
       }
       else
       {
		ptr=start;
		start=start->next;
		delete ptr;
       }
}