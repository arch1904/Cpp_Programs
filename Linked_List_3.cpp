#include<iostream>
using namespace std;
struct node
{
	int info;
	node *next;
}*newptr,*start,*temp,*n;
node *createnode(int x)
{
	n=new node;
	n->info=x;
	n->next=NULL;
	if(start==NULL)
	{  start=n;
	}
	else
	{
		n->next=start;
		start=n;
	}
	return n;
}
void display()
{       newptr=start;
	while(newptr!=NULL)
	{
	      cout<<newptr->info<<endl;
	      newptr=newptr->next;
	}
}
void del()
{
	n=start;
	start=start->next;
	delete n;
}
int main()
{   start=NULL;
	temp=NULL;
	n=NULL;
	newptr=NULL;
	int x,i;
	char c;
	do{
		system("clear");
		cout<<"For Push Enter 1"<<endl;
		cout<<"For POP Enter 2"<<endl;
		cout<<"For Display Enter 3"<<endl;
		cout<<"To Exit Enter 4"<<endl;
		cin>>i;
		if(i==1)
		{
			cout<<"Enter Data"<<endl;
			cin>>x;
		       newptr=createnode(x);
		}
		if(i==2)
		{
			del();
		}
		if(i==3)
		{
			display();
		}
		if(i==4)
		{
			exit(1);
		}
		cout<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y');
}