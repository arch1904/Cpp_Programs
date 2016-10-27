#include<iostream>
#include<fstream>
using namespace std;

	class student
	{
		private:
			int rn;
			char name[15];
			public:
			int marks1;
			int marks2;
			int marks3;

			void getdata();
			void display();
	};
	void student::getdata()
	{
		cout<<"Enter Name ";
		cin>>name;
		cout<<endl<<"Enter Roll No ";
		cin>>rn;
		cout<<endl<<"Enter Marks For Subject 1 ";
		cin>>marks1;
		cout<<endl<<"Enter Marks For Subject 2 ";
		cin>>marks2;
		cout<<endl<<"Enter Marks For Subject 3 ";
		cin>>marks3;
	}
	void student::display()
	{
		cout<<"Name:"<<name<<"\t Marks1"<<marks1<<"\t Marks 2:"<<marks2<<" \t Marks3:"<<marks3<<endl;
	}


  int main()
  {    system("clear");
  		int i;
       student stu1;
       fstream fin;
       fin.open("Student.dat",ios::out|ios::binary);
       if(!fin)
       {
	cout<<"File Cannot Be Opened";
	return 0;
       }
       cout<<"Enter details for 5 students";
       int avg[5];
       for(i=0;i<5;i++)
       {
	stu1.getdata();
	fin.write((char*)&stu1,sizeof(stu1));
	avg[i]=(stu1.marks1+stu1.marks2+stu1.marks3)/3;
       }
       fin.seekg(0);
       int a=0;
      int max=avg[0];
       for(i=0;i<5;i++)
       {
	   if(avg[i]>max)
	   {
		max=avg[i];
		a=i;
	   }
	}
	cout<<"Student "<<a+1<<"Has highest average"<<endl;
	fin.close();
	ifstream f1;
	f1.open("Student.dat",ios::in|ios::binary);
	while(!f1)
	{
		cout<<"Cannot Open File";
		return 0;
	}
	int count=-1;
	while(!f1.eof())
	{
	   f1.read((char*)&stu1,sizeof(stu1));
	   count =count+1 ;
	   if(count==a)
	   {
		stu1.display();
	   }
      }	
	return 1;
 }