#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
	public:
		int rno;
		char name[5];
		int marks;
		void getv();
		void putv();
};
void student::getv()
{
	cout<<endl<<"Enter Roll No::";
	cin>>rno;
	cout<<endl;
	cout<<"Enter Name::";
	gets(name);
	cout<<endl;
	cout<<"Enter Marks::";
	cin>>marks;
	cout<<endl;
	clrscr();
}
void student::putv()
{
	cout<<endl<<"Roll No:"<<rno<<endl;
	cout<<"Name::";
	puts(name);
	cout<<endl;
	cout<<"Marks::"<<marks<<endl;
}
void main()
{
	clrscr();
	student s;
	student *p;
	p=&s;
	s.getv();
	clrscr();
	p->putv();
	cout<<"Enter Roll No To Change::";
	cin>>p->rno;
	cout<<endl;
	cout<<"Enter Marks To Change::";
	cin>>p->marks;
	cout<<endl<<"Changed Roll No is::"<<s.rno<<endl;
	cout<<endl<<"Changed Marks is::"<<s.marks<<endl;
	getch();
}