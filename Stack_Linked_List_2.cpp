#include<iostream>
using namespace std;
struct node
{
	int info;
	int data;
	node *next;
}*top,*n,*temp;
void push()
{
	n= new node;
	cout<<"Enter Data"<<endl;
	cin>>n->info;
	cin>>n->data;
	cout<<endl;
	if(top==NULL)
	{
		top=n;
		top->next=NULL;
	}
	else
	{
		n->next=top;
		top=n;
	}
}
void pop()
{       temp=top;
	if(temp->next==NULL)
	{
		cout<<"Stack Will Now Be Empty"<<endl;
		top=top->next;
		delete temp;
	}
	else if(top==NULL)
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
	{
		top=top->next;
		delete temp;
	}
}
void display()
{       cout<<endl;
	temp=top;
	while(temp)
	{
		cout<<temp->info<<endl;
		temp=temp->next;
	}
	top->info=7;
       cout<<sizeof(top);
}
int main()
{
	system("clear");
	int i;
	char c;
	top=NULL;
	do{
		system("clear");
		cout<<"For Push Enter 1"<<endl;
		cout<<"For POP Enter 2"<<endl;
		cout<<"To Display Enter 3"<<endl;
		cout<<"To Exit Enter 4"<<endl;
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
		cout<<endl<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
}
