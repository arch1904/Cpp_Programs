#include<iostream.h>
#include<conio.h>
void sort(int a[])
{
      int t,i,j;
      for(i=4;i>=0;i--)
      {
	for(j=0;j<i;j++)
	{
		if(a[j]%10>a[j+1]%10)
		{
		  t=a[j];
		  a[j]=a[j+1];
		  a[j+1]=t;
		}

	}
	for(j=0;j<5;j++)
	{
		cout<<a[j];
	}
	cout<<endl;
}
}
void main()
{
	int k;
	clrscr();
	int arr[5];
	cout<<"Enter Array"<<endl;
	for  (k=0;k<5;k++)
	{
		cin>>arr[k];
	}

	sort(arr);
	for(k=0;k<5;k++)
	{
		cout<<arr[k]<<endl;
	}
	getch();
}