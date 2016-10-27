#include<iostream>
#include<fstream>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
void writestory();
void copystory();
int main()
{
	system("clear");
	writestory();
	cout<<"Story Written"<<endl;
	copystory();
	cout<<endl<<"Story Copied"<<endl;
}
void writestory()
{       cout<<"Write Story Now Press Enter Twice to finish"<<endl;
	char word[100];
	fstream fout;
	fout.open("Story.txt",ios::out);
	int i,count;
	while(1)
       {      count=0;
	      i=0;

	      cin.getline(word,100);
	      while(word[i])
	      {
		  count++;
		  i++;
	      }
		if(count==0)
		{
			break;
		}
		else
		 fout<<word<<' ';
       }
       fout.close();
       cout<<endl;
}
void copystory()
{       cout<<"Copying Story"<<endl;
	char string[10];
	ofstream fout;
	fout.open("Story1.txt",ios::out);
	ifstream fin;
	fin.open("Story.txt",ios::in);
	while(!fin.eof())
	{
		fin>>string;

		if(islower(string[0])&&string[0]!='a'&&string[0]!='e'&&string[0]!='i'&&string[0]!='o'&&string[0]!='u')
		{
		fout<<string<<' ';
		}
	}
	fin.close();
	fout.close();
}

