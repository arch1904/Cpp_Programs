#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
struct node
{
	int info;
	node *next;
}*front,*rear,*n,*temp;
void insert()
{
	n=new node;
	cout<<"Enter"<<endl;
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
		rear->next=n;
		rear=n;
	}
}
void del()
{
	save=front;
	front=front->next;
	delete save;
}
