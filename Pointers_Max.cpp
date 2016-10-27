#include<iostream>
using namespace std;
int *big(int &,int &);
int main()
{
	system("clear");
	int a,b,*c;
	cout<<"Enter Two Integers \n";
	cin>>a>>b;
	c=big(a,b);
	cout<<"The bigger value is"<<*c<<"\n";

}
int *big(int &x,int &y)
{
	if(x>y)
	{
		return(&x);
	}
	else
	{
		return(&y);
	}
}
