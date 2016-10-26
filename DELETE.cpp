#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
int i;
class student
{
	private:
		char name[20];
		int rn;
		int marks[5];
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

void main()
{
	clrscr();
	fstream fout;
	fout.open("Student1.txt",ios::out|ios::in);
	cout<<"Enter Details For 3 students "<<endl;
	for(int j=0;j<3;j++)
	{
		ob.input();
		fout.write((char*)&ob,sizeof(ob));
	}
	fout.close();
	ifstream fin;
	fin.open("Student.dat",ios::in|ios::binary);
	cout<<"Enter Roll No To Be Deleted ";
	int rn1;
	cin>>rn1;

	ofstream ff;
	ff.open("temp.dat",ios::out|ios::binary);
	while(fin.read((char*)&ob,sizeof(ob)))
	{
		if(ob.ron()!=rn1)
		 ff.write((char*)&ob,sizeof(ob));

	}
	fin.close();
	ff.close();
       //	remove("Student.dat");
       //	rename("temp.dat","Student.dat");
	ifstream fo;
	fo.open("temp.dat",ios::in|ios::binary);
	while  (fo.read((char*)&ob,sizeof(ob)))
	{
		ob.output();
	}
	fo.close();
	getch();
}