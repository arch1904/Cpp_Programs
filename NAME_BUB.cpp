#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	char name[10][8],tname[8];
	int i,j,n,k,l,m,x,z;
	cout<<"Enter how many names"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" Names"<<endl;
	for(i=0;i<n;i++)
	{
		gets(name[i]);
	}
	for(i=0;i<n-1;i++)
	{

		for(z=i+1;z<n;z++)
		{
		 m=0;
		 k=name[i][m];
		 l=name[z][m];
		 while(k==l&&m<8)
		{
			k=name[i][++m];
			l=name[z][++m];
			if(k>l)
			break;
		}

		if(k>l)
		{
			strcpy(tname,name[i]);
			strcpy(name[i],name[z]);
			strcpy(name[z],tname);
		}
		}
	}
	clrscr();
	cout<<"Sorted"<<endl;
	for(i=0;i<n;i++)
	{
		puts(name[i]);
		cout<<endl;
	}
	getch();
}