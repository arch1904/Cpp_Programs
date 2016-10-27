#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int i;
class student
{
	private:
		char name[20];
		int rn;
		int marks[2];
	public:
		void input();
		void output();
		void modify();
		int ron()
		{     return rn;
		}

}ob;
void student::input()
{
	cout<<"Enter Name Of Student ";
	gets(name);
	cout<<endl<<"Enter Roll No ";
	cin>>rn;
	for(i=0;i<2;i++)
	{
		cout<<endl<<"Enter Marks For Subject "<<i+1<<"  ";
		cin>>marks[i];
	}
	cout<<endl;
	cout<<"Records Saved"<<endl;
}
void student::output()
{
	cout<<"Name ";
	puts(name);
	cout<<endl;
	cout<<"Roll No "<<rn<<endl;
	for(i=0;i<2;i++)
	{
		cout<<"Marks For Subject"<<i+1<<" "<<marks[i]<<endl;
	}

}

int main()
{
	system("clear");
	fstream fout;
	fout.open("Student.dat",ios::out|ios::in);
	cout<<"Enter Details For 3 students "<<endl;
	for(int j=0;j<3;j++)
	{
		ob.input();
		fout.write((char*)&ob,sizeof(ob));
	}
	fout.seekg(0);
	system("clear");
	while(fout.read((char*)&ob,sizeof(ob)))
	{
		fout.read((char*)&ob,sizeof(ob));
		ob.output();
	}
	fout.close();
}