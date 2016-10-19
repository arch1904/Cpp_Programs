#include<iostream.h>
#include<conio.h>
void sort(int A[],int B[])
{
	int a=0;
	int b=4;
	int C[10],i,c=0;
	while(a<5&&b<5)
	{
		if(A[a]<B[b])
		{
			C[c++]=A[a++];
		}
		if(B[b]<=A[a])
		{
			C[c++]=B[b--];
		}
	}
	if(a<5&&b<0)
	{
		for(i=a;i<5;i++)
		{
			C[c++]=A[i];
		}
	}
	if(a>=5&&b>=0)
	{
		for(i=b;i>=0;i--)
		{
			C[c++]=B[i];
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<C[i]<<endl;
	}
}
void main()
{
	clrscr();
       //	cout<<"Enter The Size Of Array 1 "<<endl;
       int  A[5],B[5];
	cout<<endl<<"Now Enter Array 1"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>A[i];
		cout<<endl;
	}
       //	cout<<"Enter Size Of Array 2"<<endl;
       //	cin>>n2;
	cout<<endl<<"Enter Array 2"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>B[i];
		cout<<endl;
	}
	sort(A,B);
	cout<<endl;
	getch();
}