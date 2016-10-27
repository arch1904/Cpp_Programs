#include<iostream>
using namespace std;
struct node
{
	int info;
	node *next;
}*front,*rear,*n,*newptr,*temp;
node *create(int x)
{
	n=new node;
	if(front==NULL)
	{
		front=n;
	}
	if(rear==NULL)
	{
		rear=n;
	}
	else
	rear->next=n;
	rear=n;
	n->info=x;
	return n;
}
void display()
{
	newptr=front;
	while(newptr!=NULL)
	{
		cout<<newptr->info<<endl;
		newptr=newptr->next;
	}
}
void del()
{
	newptr=front;
	front=front->next;
	delete newptr;
}
int main()
{    system("clear");
	 front=NULL;
	 rear=NULL;
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
		       newptr=create(x);
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
