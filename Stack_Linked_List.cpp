#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
	int emp_no;
	char emp_name[20];
	int sal;
	node *next;
}*n,*top,*bot,*temp;
void push()
{
	n=new node;
	cout<<"Enter Employee Number"<<endl;
	cin>>n->emp_no;
	cout<<endl<<"Enter Employee Name"<<endl;
	gets(n->emp_name);
	cout<<endl<<"Enter Salary"<<endl;
	cin>>n->sal;
	cout<<endl;
	if(top==NULL)
	{       top=n;
		bot=n;
		bot->next=NULL;
	}
	else
	{
	    n->next=top;
	    top=n;
	}

}
void pop()
{
	temp=top;
	top=top->next;
	delete temp;
}
void display()
{
	temp=top;
	while(temp)
	{
	     cout<<"Employee Number Is "<<temp->emp_no<<endl;
	     cout<<"Employee Name is";
	     puts(temp->emp_name);
	     cout<<endl<<"Salary Is "<<temp->sal<<endl;
	     temp=temp->next;
	}
}
int main()
{
	char c;
	int i;
	do{
		system("clear");
		cout<<"1 for Push"<<endl;
		cout<<"2 for POP"<<endl;
		cout<<"3 for Display"<<endl;
		cout<<"4 for Exit"<<endl;
		cin>>i;
		if(i==1)
		{
			push();
		}
		if(i==2)
		{
			pop();
		}
		if(i==3)
		{
			display();
		}
		if(i==4)
		{
			exit(1);
		}
		cout<<endl<<"Do You Want To Continue?";
		cin>>c;
	}while(c=='y'||c=='Y');
}