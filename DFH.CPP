#include<iostream.h>
#include<conio.h>

class student
{
	private:
		int admno;
		char name[30];
	public:
		void getdata()
		{
			cout<<endl<<"Enter Your Admission No.: "<<endl;
			cin>>admno;
			cout<<endl<<"Enter Your Name: "<<endl;
			gets(name);
		}
		void showdata()
		{
			cout<<end<<"Admission no. is : "<<admno<<endl;
			cout<<endl<<"Name is : ";
			puts(name);
			cout<<endl;
		}
		int retadmno()
		{
			return admno;
		}
};
	void write_data()
	{
		student s;
		ofstream fp2;
		fp2.open("student.dat",ios::binary|ios::app);
		s.getdata();
		fp2.write((char*)&s,sizeof(s));
		fp2.close();
	}
	void display()
	{
		student s;
		ifstream fp1;
		fp1.oen("student.dat",ios::binary);
		while(fp1.read((char*)&s,sizeof(s)))
		{
			s.showdata();
		}
		fp1.close();
	}
	void search(int n)
	{
		student s;
		ifstream fp1;
		fp1.open("student.dat",ios::binary);
		while(fp1.read((char*)&s,sizeof(s)))
		{
			if(s.retadmno()==n)
			{
				s.showdata();
			}
		}
		fp1.close();
	}
	void modify(int n)
	{
		student s;
		ifstream fp1;
		fp1.open("student.dat",ios::binary);
		ofstream fp2;
		fp2.open("temp.dat",ios::binary,ios::out);
		int p=fp1.tellg();
		while(fp1.read((char*)&s,sizeof(s)))
		{
			if(s.retadmno()==n)
			fp1.seekg(p-sizeof(s)ios::cur);
			s.getdata();
			fp2.write((char*)&s,sizeof(s));
		}
		fp1.close();
		fp2.close();
	}
	void delete(int n)
	{
		student s;
		ifstream fp1;
		fp1.open("student.dat",ios::binary);
		ofstream fp2;
		fp2.open("temp.dat",ios::binary);
		while(fp1.read((char*)&s,sizeof(s)))
		{
			if(s.retadmno()!=n)
			{
				fp2.write((char*)&s,sizeof(s));
			}
		}
		fp1.close();
		cp2.close();
		remove("student.dat");
		rename("temp.dat","newstudent.dat");
	}
	void copy()
	{
		student s;
		ifstream fin;
		ofstream fout;
		fin.open("student.dat",ios::in,ios::binary);
		fout.open("abc.dat",ios::out,ios::binary);
		while(!fin.eof())
		{
			fin.read((char*)&s,sizeof(s));
			if()
			fout.write((char*)
		}
		fin.close();
		fout.close();
	}
