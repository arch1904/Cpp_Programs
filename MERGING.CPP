#include<iostream.h>
#include<conio.h>
void sort2(int a[],int m,int b[],int n,int c[])
{
	int l=m+n;
	int i=0,j=0,k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		if(b[j]<a[i])
		{
			c[k++]=b[j++];
		}
		if(a[i]==b[j])
		{
			c[k++]=a[i++];
			j++;
		}
	}
	while(i>=m&&j<n)
	{
		c[k++]=b[j++];
	}
	while(i<m&&j>=n)
	{
		c[k++]=a[i++];
	}
	for(i=0;i<m+n;i++)
	{
		cout<<c[i]<<endl;
	}
}
void sort(int a[],int m, int b[], int n, int c[])
{
   int i;
   for(i=0;i<m+n;i++)
   {
	if(i<m)
	{
		c[i]=a[i];
	}
	if(i>=m)
	{
	    c[i]=b[i];
	}
   }
   for(i=0;i<m+n;i++)
   {
	cout<<c[i]<<endl;
   }
}
