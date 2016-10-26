#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
	int no;
	char name[10];
	int exp;
	int sal;
}s1[5],*ptr;
void main()
{
	clrscr();
	int i;
	for(i=0;i<5;i++)
	{
		clrscr();
		cout<<"Enter Employee No"<<endl;
		cin>>s1[i].no;
		cout<<endl;
		cout<<"Enter Employee Name"<<endl;
		gets(s1[i].name);
		cout<<endl;
		cout<<"Enter Employee Experience"<<endl;
		cin>>s1[i].exp;
		cout<<endl;
		cout<<"Enter Employee Salary"<<endl;
		cin>>s1[i].sal;
		cout<<endl<<"Entry Successful"<<endl;
	}
	ptr=s1;
	char x;
	int z=1;
	do{
	cout<<"Employee "<<z++<<endl;
	cout<<"Name"<<ptr->name<<endl;
	cout<<"No"<<ptr->no<<endl;
	cout<<"Exp"<<ptr->exp<<endl;
	if(ptr->exp>10)
	{
		ptr->sal=ptr->sal+0.1*ptr->sal;
	}
	cout<<"Salary"<<ptr->sal<<endl;
	ptr++;
	cin>>x;
	}while(x=='y'||x=='Y');
	getch();
}