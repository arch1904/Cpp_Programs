#include<iostream.h>
#include<conio.h>
void sort(int A[],int B[],int s1,int s2)
{
	int a=0,b=0,c=0;
	int C[20];
	while(a<s1&&b<s2)
	{
		if(A[a]<B[b])
		{
			C[c++]=A[a++];
		}
		if(B[b]<=A[a])
		{
			C[c++]=B[b++];
		}
	}
	if(a>s1&&b<s2)
	{
		for(int i=b;i<s2;i++)
		{
			C[c++]=B[i];
		}
	}
	if(a<s1&&b>s2)
	{
		for(int i=a;i<s1;i++)
		{
			C[c++]=A[i];
		}
	}
	for(int i=0;i<s1+s2;i++)
	{
		cout<<C[i]<<endl;
	}
}
void main()
{
	clrscr();
	cout<<"Enter The Size Of Array 1 "<<endl;
	int n1,n2,A[10],B[10];
	cin>>n1;
	cout<<endl<<"Now Enter Array 1"<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>A[i];
		cout<<endl;
	}
	cout<<"Enter Size Of Array 2"<<endl;
	cin>>n2;
	cout<<endl<<"Enter Array 2"<<endl;
	for(i=0;i<n2;i++)
	{
		cin>>B[i];
		cout<<endl;
	}
	sort(A,B,n1,n2);
	cout<<endl;
	getch();
}