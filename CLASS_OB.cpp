#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{       public:
	int rno;
	char name[5];

	void getv();
	void putv();
};
void student::getv()
{
	cout<<"Enter Roll No"<<endl;
	cin>>rno;
	cout<<endl<<"Enter Name"<<endl;
	gets(name);
	cout<<endl;
}
void student::putv()
{
	cout<<"Roll No::"<<rno<<endl;
	cout<<"Name::";
	puts(name);
	cout<<endl;
}
void afunc(student &s1)
{
    cout<<"Enter Roll No";
    cin>>s1.rno;
}
void main()
{
	clrscr();
	student s;
	s.getv();
	clrscr();
	s.putv();
	cout<<endl;
	afunc(s);
	cout<<endl<<"Roll No Is::"<<s.rno<<endl;
	getch();
}
