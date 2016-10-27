#include<iostream>
using namespace std;
void addition(int &a,int &b)
{
	a=a+b;
	cout<<"This is inside the method "<<a<<endl;

}

int main()
{
	int a=0;
	int b=2;
	addition(a,b);
	cout<<"This is outside the method "<<a<<endl;
}