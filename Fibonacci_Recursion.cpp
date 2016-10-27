#include<iostream>
using namespace std;
int count=0;
void fib(int a,int b)
{
	int c;
	int count=0;
	c=a+b;
	cout<<c<<endl;
	a=b;
	b=c;
	count++;
	if(count==15)
	{

	}
	else
	fib(a,b);
}
int main()
{
	system("clear");
	int a=0,b=1;
	fib(a,b);
}