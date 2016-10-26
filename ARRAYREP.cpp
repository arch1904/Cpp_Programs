#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char a[10];
	int b[10];
	int start;
	a[0]='l';
	a[1]=' ';
	a[2]='r';
	a[3]='s';
	a[4]='j';
	a[5]=' ';
	a[6]='e';
	a[7]='v';
	a[8]=' ';
	a[9]=' ';
	b[0]=2;
	b[2]=3;
	b[3]=7;
	b[4]=0;
	b[6]=4;
	b[7]=1;
	start=6;
	int t,i,x;
       t=a[start];
       cout<<t<<endl;
       for(i=0;i<5;i++)
       {
	 x=b[t];
	 cout<<a[x];
	 cout<<endl;
	 t=b[x];
       }
       getch();
}
