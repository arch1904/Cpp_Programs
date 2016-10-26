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
	const int n=20;
	int i,j,count,a;
	char c;
	do{
		clrscr();
		cout<<endl<<"TO INSERT ENTER 1"<<endl;
		cout<<"To Delete Enter 2"<<endl;
		cout<<"To Display Enter 3"<<endl;
		cout<<"To Display Enter 4"<<endl;
		cin>>a;
		cout<<endl;
		if(a==1)
		{
		     cout<<"Enter Info"<<endl;
		     cin>>j;
		     cout<<endl;
		     newptr=create(j);

