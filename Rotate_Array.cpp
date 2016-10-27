#include<iostream>
using namespace std;
void rot(int n,int a[])
{
   int i,t,j;
   for(i=6;i>6-n;i--)
   {
	t=a[6];
	for(j=6;j>=0;j--)
	{
		a[j]=a[j-1];
	}
	a[0]=t;
   }
}
int main()
{
	system("clear");
	int arr[]={1,2,3,4,5,6,7};
	int n;
	cout<<"Enter Rotatory Factor"<<endl;
	cin>>n;
	rot(n,arr);
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<endl;
	}
}