#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class student
{
	private:
		char name[20];
		int rn;
		int marks;
	public: void input();
		void output();
		int ron();


}ob;
	void student::input()
		{
			cout<<"Name ";
			gets(name);
			cout<<endl<<"Roll No ";
			cin>>rn;
			cout<<endl<<"Marks ";
			cin>>marks;
		}
		void student:: output()
		{
			cout<<endl<<"Name ";
			puts(name);
			cout<<endl<<"Roll No "<<rn<<endl;
			cout<<"Marks "<<marks<<endl;
		}
		int student::ron()
		{
			return rn;
		}
void main()
{
	clrscr();
	ofstream fout;
	fout.open("stu.dat",ios::out|ios::binary);
	int i;
	cout<<"enter details for 3 students"<<endl;
	for(i=0;i<3;i++)
	{
		ob.input();
		fout.write((char*)&ob,sizeof(ob));
	}
	fout.close();
	clrscr();
	ifstream fin;
	fin.open("stu.dat",ios::in|ios::binary);
	ofstream fo;
	fo.open("temp.dat",ios::out|ios::binary);
	cout<<endl<<"ROLL NO DE BE " ;
	int ron;
	cin>>ron;
	while(fin.read((char*)&ob,sizeof(ob)))
	{
		if(ob.ron()!=ron)
		{
			fo.write((char*)&ob,sizeof(ob));
		}
	}
	fin.close();
	fo.close();
	ifstream ff;
	ff.open("temp.dat",ios::in|ios::binary);
	while(ff.read((char*)&ob,sizeof(ob)))
	{

		ob.output();
	}
	getch();
}



