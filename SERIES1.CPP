#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
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
	getch();
}