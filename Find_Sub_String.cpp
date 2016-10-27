#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	system("clear");
	int i,c,l1,l2,k,j,e;
	char a[]={"hello there"};
	char b[4];
	char d[4];
	gets(b);
	cout<<endl;
	cout<<"SEARCHING"<<endl;
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		if(a[i]==b[0])
		{
		    c=i;
		   // int x=0;
		    for(j=c,k=0;j<c+l2-1;j++,k++)
		    {
			 d[k]=a[j];
		  //	 x++;
		       //	 cout<<a[j];
			// cout<<d[k];
		    }
		   // d[++k]='\0';
		   // cout<<endl<<k;


		   // cout<<endl<<x<<endl;
		       //	puts(d);
		       //	cout<<endl;

		//   cout<<" ----    "  <<d<<"------"<<b<<endl;
	     //	int s=strcmp(b,d);
	       //	cout<<endl<<"STRCMP "<<s;
			int flag=0;
		   for(int x=0;x<l2-1;x++)
		   {
			if(d[x]==b[x])
			{
				flag=1;
			 }
		       else
		       {
				flag=0;
				break;
		       }
		   }
		   cout<<endl<<flag<<endl;
		   if(flag==1)
		   {

			cout<<"STRING FOUND AT "<<c;
			break;
		   }
		}
	}
}