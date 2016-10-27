//Series (1)+(1+2)+(1+2+3)......n
#include<iostream>
using namespace std;
int main()
{
	system("clear");
	int i,j,sum=0,n;
	cout<<"Enter How Many Terms"<<endl;
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
		}
	}
	cout<<endl<<"Sum is "<<sum<<endl;
}