#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class salesman
{
	char name[26];
	float total_sales;
	public:
	salesman(char *s,float f)
	{
		strcpy(name," ");
		strcpy(name,s);
		total_sales=f;
	}
	void prnobject()
	{
		cout<<this->name;
		cout<<" has invoked prnobject()"<<endl;
	}
};
int main()
{
	system("clear");
	salesman Raman("Raman",21450),Sita("Sita",23190),Vedant("Vedant",19142);
	Raman.prnobject();
	Vedant.prnobject();
	Sita.prnobject();
}
