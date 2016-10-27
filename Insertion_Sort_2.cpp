#include<iostream>
using namespace std;
int main()
{
	system("clear");
	int i=0,j;
	int a[]={10,9,8,7,6,5,4,3,2};
	int t;
	for(i=1;i<9;i++)
	{
		t=a[i];
		j=i;
		while(j>0&&t<a[j-1])
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=t;
	}
	for(i=0;i<9;i++)
	{
		cout<<a[i]<<endl;
	}
}