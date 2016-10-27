#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
class employee
{
	int empno;
	char name[20];
	int salary;
	char desig[20];
	public:
		void insert()
		{
		   cout<<"Enter Employee No"<<endl;
		   cin>>empno;
		   cout<<endl<<"Enter Employee Name"<<endl;
		   gets(name);
		   cout<<endl<<"Enter Salary"<<endl;
		   cin>>salary;
		   cout<<endl<<"Enter Designation"<<endl;
		   gets(desig);
		   cout<<endl;
		}
		void display()
		{

		cout<<"Employee No "<<empno<<endl;
		cout<<"Name";
		puts(name);
		cout<<endl<<"Salary "<<salary<<endl;
		cout<<"Designation ";
		puts(desig);
		}
		int rempno()
		{
			return empno;
		}
}s;
void del()
{
	ifstream fin;
	fin.open("pqr.dat",ios::in||ios::binary);
	ofstream fout;
	fout.open("temp.dat",ios::out||ios::binary);
	cout<<"Enter Employee No Of Employee Record To Be Deleted"<<endl;
	int no;
	cin>>no;
	while(fin)
	{       char c;
		fin.read((char*)&s,sizeof(s));
		if(s.rempno()==no)
		{
		   cout<<"Do You Want To Continue?"<<endl;
		   cin>>c;
		   if(c!='y')
		   {
			fout.write((char*)&s,sizeof(s));
		   }
		}
		else
		fout.write((char*)&s,sizeof(s));
	}


	fin.close();
	fout.close();
	remove("pqr.dat");
	rename("temp.dat","pqr.dat");

}
void modify()
{
	ifstream fin;
	fin.open("pqr.dat",ios::in||ios::binary);
	ofstream fout;
	fout.open("temp.dat",ios::out||ios::binary);
	cout<<"Enter Employee No Of Employee Record To Be Modified"<<endl;
	int no;
	cin>>no;
	while(fin)
	{
		fin.read((char*)&s,sizeof(s));
		if(s.rempno()==no)
		{
		  s.insert();
		  fout.open("pqr.dat",ios::out||ios::binary||ios::app);
		  fout.write((char*)&s,sizeof(s));
		}
		else
		fout.write((char*)&s,sizeof(s));
	}
	fin.close();
	fout.close();
	remove("pqr.dat");
	rename("temp.dat","pqr.dat");

}
int main()
{
	system("clear");
	employee ob1;
	int n;
	char c;
	do
		{
			system("clear");
			cout<<"TO Insert Enter 1"<<endl;
			cout<<"To Delete Enter 2"<<endl;
			cout<<"To Modify Enter 3"<<endl;
			cout<<"To Display Enter 4"<<endl;
			cout<<"To Exit Enter 5"<<endl;
			cin>>n;
			if(n==1)
			{

				ofstream fout;
				fout.open("pqr.dat",ios::out||ios::binary);
				char c='y';
				while(c=='y')
				{       system("clear");
					ob1.insert();
					fout.write((char*)&ob1,sizeof(ob1));
					cout<<endl<<"Do You Want To Continue?"<<endl;
					cin>>c;
				}
				fout.close();


			}
			if(n==2)
			{
				del();
			}
			if(n==3)
			{
			       modify();
			}
			if(n==4)
			{       ifstream fin;
				fin.open("pqr.dat",ios::in||ios::binary);
				while(fin.read((char*)&ob1,sizeof(ob1)))
				{
					ob1.display();
				}
				fin.close();

			}
			if(n==5)
			{
				exit(1);
			}
			cout<<endl<<"Do You Want To Go To Menu?"<<endl;
			cin>>c;
		}while(c=='y'||c=='Y');
}
