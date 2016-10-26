#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<ctype.h>
char str[100];
void create()
{
	ofstream fout;
	fout.open("file1.txt",ios::out);
	// cin.getlin(str,100);
	gets(str);
	 fout<<str;
	fout.close();
}
void display()
{
       ifstream fin;
       fin.open("file1.txt",ios::in);

       while(!fin.eof())
       {
	   fin.getline(str,100);
	   puts(str);
       }
	fin.close();
}
void uppercase()
{       char c;
	ifstream fin;
	fin.open("file1.txt",ios::in);
	fstream fout;
	fout.open("file2.txt",ios::out);
	while(!fin.eof())
	{
		fin>>c;
	       c=toupper(c);
		fout<<c;
	}
	fin.close();
	fout.close();
}
void main()
{
	clrscr();
	int i;
	char c;


	do{
		clrscr();
		cout<<"1 Create File"<<endl;
		cout<<"2 Display File"<<endl;
		cout<<"3 Uppercase"<<endl;
		cout<<"4 Exit"<<endl;
		cin>>i;
		cout<<endl;
		if(i==1)
		{
			create();
		}
		if(i==2)
		{
			display();
		}
		if(i==3)
		{
			uppercase();
		}
		if(i==4)
		{
			exit(1);
		}
		cout<<endl<<"Do You Want To Continue?"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}