#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i,j,k,l,last,t;
       char a[12];
       gets(a);
       cout<<endl;
       l=strlen(a);
       cout<<l<<endl;
       for(i=0;i<l;i=j+1)
       {
		j=i;
		while(a[j]!='\0'&&a[j]!=' ') //how?
		{
			j++;
		}

		if(j%2==0)
		{
			last=j;
		}
		else
		{
			last=j-1;
		}
		for(k=i;k<last;k=k+2)
		{
		      t=a[k];
		      a[k]=a[k+1];
		      a[k+1]=t;
		}
       }
       for(i=0;i<l;i++)
       {
		cout<<a[i];
       }
       getch();
}