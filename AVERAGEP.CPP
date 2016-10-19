#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	ofstream fin;
	fin.open("marks.dat",ios::out);
	int m[3];
	for(int i=0;i<3;i++)
       {
       cin>>m[i];
       fin<<m[i]<<"\n";
       }
       fin.close();
       ofstream fjn;
       fjn.open("name.dat",ios::out);
       char name[20];
       gets(name);
       fjn<<name;
       fjn.close();
       ifstream finn("marks.dat",ios::in);
       int x,y,z;
       int a;
	   finn>>x;
	   finn>>y;
	   finn>>z;
	   a=(x+y+z)/3;
       finn.close();
       ofstream fout("average.dat",ios::out);
       fout<<a<<"\n";
       fout.close();
       getch();
}
