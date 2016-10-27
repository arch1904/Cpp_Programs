#include<iostream>
#include<limits.h>
using namespace std;
void intsort(int ar[],int size)
{
	int tmp,i,j;
	ar[0]=INT_MIN;
	for(i=1;i<=size;i++)
	{
		tmp=ar[i];
		j=i-1;
		while(tmp<ar[j])
		{
			ar[j+1]=ar[j];
			j--;
		}
		ar[j+1]=tmp;
		cout<<"Array after pass -"<<i<<"- is:";
		for(int k=1;k<=size;k++)
		{
			cout<<ar[k]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	system("clear");
	int ar[50],item,n,index;
	int i=0;
	cout<<"How many elements do you want to create array with?(max 50).."<<endl;
	cin>>n;
	cout<<endl<<"Enter Array Elements..."<<endl;
	for(i=1;i<=n;i++)
	{
		cin>>ar[i];
	}
	intsort(ar,n);
	cout<<endl<<endl<<"The Sorted Array Is As Shown Below"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}
