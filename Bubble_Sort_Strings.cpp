#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[10][10]={"Zubin","Yana","Xeno","Warde","Vinyl","Eena","Dhruv","Cicada","Bhram","Archit"};
	int i,j,k;
	char t[10],p[10];
	for(i=1;i<10;i++)
	{
		strcpy(p,a[i]);
		j=i-1;
		k=strcmp(p,a[j]);
		while(k<0&&j>=0)
		{

			strcpy(a[j],a[j-1]);
			--j;
			k=strcmp(p,a[j]);
		}
		strcpy(a[j],p);
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
}

