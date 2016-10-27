#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int a;
class employee
{
		int empno;
		char name[20];
	      long int sal;
	public:
		void insert();
		void display();
		int ret()
		{
			return empno;
		}
};
void employee::insert()
{
	cout<<"Enter Employee No"<<endl;
	cin>>empno;
	cout<<endl<<"Enter Name"<<endl;
	gets(name);
	cout<<endl<<"Enter Salary"<<endl;
	cin>>sal;
	cout<<endl;
}
void employee::display()
{
	cout<<"Employee No "<<empno<<endl;
	cout<<"Name ";
	puts(name);
	cout<<endl;
	cout<<"Salary "<<sal<<endl;
}
void finsert()
{
	employee obj;
	obj.insert();
	ofstream fout;
	fout.open("111.dat",ios::app||ios::binary);
	fout.write((char*)&obj,sizeof(obj));
	fout.close();
}
void fdelete()
{
	employee obj;
	ifstream fin;
	ofstream fout;
	fout.open("temp.dat",ios::out||ios::binary);
	fin.open("111.dat",ios::in||ios::binary);
	cout<<"Enter Employee No of record to be deleted"<<endl;
	cin>>a;
	cout<<endl;
	while(fin)
	{
		fin.read((char*)&obj,sizeof(obj));
		if(obj.ret()==a)
		{
		}
		else
			fout.write((char*)&obj,sizeof(obj));

	}
	fin.close();
	fout.close();
	remove("111.dat");
	rename("temp.dat","111.dat");

}
void fdisplay()
{       employee obj;
	ifstream fin;
	fin.open("111.dat",ios::in||ios::binary);

	while(!fin.eof())
	{
		fin.read((char*)&obj,sizeof(obj));
		obj.display();
	}
	fin.close();
}
void fmodify()
{
	employee obj;
	ifstream fin;
	fin.open("111.dat",ios::in||ios::binary);
	ofstream fout;
	fout.open("temp.dat",ios::out||ios::binary);
	cout<<"Enter Employee No To Be Modified"<<endl;
	cin>>a;
	cout<<endl;
	while(fin)
	{
		fin.read((char*)&obj,sizeof(obj));
		if(obj.ret()==a)
		{
			obj.insert();
			fout.write((char*)&obj,sizeof(obj));
		}
		else
			fout.write((char*)&obj,sizeof(obj));

	}
	fin.close();
	fout.close();
	remove("111.dat");
	rename("temp.dat","111.dat");
}
int main()
{
	system("clear");
	int n;
	char c;
	do{
		system("clear");
		cout<<" To Insert Enter 1"<<endl;
		cout<<" To Delete Enter 2"<<endl;
		cout<<" To Modify Enter 3"<<endl;
		cout<<" To Display Enter 4"<<endl;
		cout<<" To Exit Enter 5"<<endl;
		cin>>n;
		cout<<endl;
		if(n==1)
		{
			finsert();
		}
		if(n==2)
		{
			fdelete();
		}
		if(n==3)
		{
			fmodify();
		}
		if(n==4)
		{
			fdisplay();
		}
		if(n==5)
		{
			exit(1);
		}
		cout<<" Do You Want To Continue"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
}