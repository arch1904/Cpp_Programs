#include<iostream>
using namespace std;
float &max(float &x , float &y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	system("clear");
	float a,b;
	cout<<"Enter a ";
	cin>>a;
	cout<<endl<<"Enter b ";
	cin>>b;
	cout<<endl;
	max(a,b)=100;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
}