#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,j,x,b,sum;
  char ch,c;

  for(i=1;i<=5;i++) {

     for(j=1,c='A',x=1,ch='A';j<=i;j++,ch=c+x*i,x++) {
      cout<<ch; }

     cout<<endl;
  }

  getch();
 }