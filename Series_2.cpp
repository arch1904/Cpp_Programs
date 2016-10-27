#include<iostream>
using namespace std;
int main()
{
	system("clear");
	int i,j,n,sum=0;
	cout<<"Enter upto how many terms"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum=sum+j;
		}
	}
	cout<<endl<<"The Sum upto "<<n<<" terms is "<<sum;
}