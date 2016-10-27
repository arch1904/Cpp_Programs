#include<iostream>
#include<stdio.h>
using namespace std;
struct student
{
	char name[20];
	int rn;
	int marks[3];
}stu,*st;
int main()
{
	system("clear");
	cout<<"Enter Student Name ";
	gets(stu.name);
	cout<<endl<<"Enter Roll No ";
	cin>>stu.rn;
	for(int i=0;i<3;i++)
	{
		cout<<endl<<"Enter Marks " << i;
		cin>>stu.marks[i];
	}
	st=&stu;
	int avg;
	avg=(st->marks[0]+st->marks[1]+st->marks[2])/3;
	if(avg<=100&&avg>=90)
	{
		cout<<"Grade is A"<<endl;
	}
	if(avg<90&&avg>=80)
	{
		cout<<"Grade is B"<<endl;
	}
	if(avg<80&&avg>=70)
	{
		cout<<"Grade is C"<<endl;
	}
	if(avg<70&&avg>=60)
	{
		cout<<"Grade is D"<<endl;
	}
	if(avg<60)
	{
		cout<<"FAIL"<<endl;
	}
}