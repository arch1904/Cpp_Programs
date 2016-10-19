#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class data
{
	char cm[15];
	char state[20];
public:
	char *retcm()
	{
		return cm;
	}
	char *retstate()
	{
		return state;
	}
	void insert()
	{
		cout<<"CM"<<endl;
		gets(cm);
		cout<<endl<<"State"<<endl;
		gets(state);
	}

};
void main()
{
	clrscr();
	data obj;
	ifstream fin;
	int n;
	char c;
	fin.open("data.dat",ios::in||ios::binary);
	do
	{
		clrscr();
		cout<<"Search with CM"<<endl;
		cout<<"Search with State"<<endl;
		cout<<"Exit"<<endl;
		cin>>n;
		if(n==1)
		{

	cout<<"Enter Name Of CM"<<endl;
	char na[15],ab[15];
	gets(na);
	cout<<endl;
	while(fin.read((char*)&obj,sizeof(obj)))
	{      strcpy(ab,obj.retcm());
	       n=strcmp(na,ab);
	       if(n==0)
	       {
			strcpy(ab,obj.retstate());
			cout<<"State Is " ;
			puts(ab);
			break;
	      }
	}
	}
		if(n==2)
		{
				cout<<"Enter Name Of State"<<endl;
	char na[15],ab[15];
	gets(na);
	cout<<endl;
	while(fin.read((char*)&obj,sizeof(obj)))
	{      strcpy(ab,obj.retstate());
	       n=strcmp(na,ab);
	       if(n==0)
	       {
			strcpy(ab,obj.retcm());
			cout<<"CM Is " ;
			puts(ab);
			break;
	      }
	}
		}
		if(n==3)
		{
			exit(1);
		}
		cout<<"To Continue Enter y"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
	getch();
}
