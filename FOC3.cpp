#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,x,z,q,a,b;

  for(i=1,z=1,a=0;i<=4;i++,z++,a++) {

      for(x=1,q=z;x<=5-i;x++,q++) {
       cout<<q; }

      for(x=1,b=a;x<i;x++,b--) {
       cout<<b; }

      cout<<endl;

  }

  getch();
 }