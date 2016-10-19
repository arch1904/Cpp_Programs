#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,j,b,x,sum;

  for(i=1;i<=5;i++) {

     for(j=1,b=1,sum=1,x=1;j<=i;j++,sum=b+x*i,x++)
       cout<<sum;

     cout<<endl;

  }

  getch();
 }