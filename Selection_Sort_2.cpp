#include<iostream>
using namespace std;
void sort(int a[5])
{
	int min,pos,i,j,t;
	for(i=0;i<5;i++)
	{
		min=a[i];
		int p=i;
		for(j=i+1;j<5;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}


		}
			if(a[i]==min)
			{
			    pos=i;
			}
			t=a[pos];
			a[pos]=a[p];
			a[p]=t;
			for(int k=0;k<5;k++)
			{
				cout<<a[k]<<" ";
			}
		       cout<<endl;
	}

}
int main()
{
	system("clear");
	int arr[5];
	cout<<endl<<"Enter Array"<<endl;
	for(int k=0;k<5;k++)
	{
		cin>>arr[k];
	}
	sort(arr);
	cout<<endl;
	cout<<"SORTED"<<endl;
	for(int k=0;k<5;k++)
	{
		cout<<arr[k]<<endl;
	}
}


