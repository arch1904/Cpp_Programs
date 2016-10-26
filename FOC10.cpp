#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,j,x,sp;

  for(i=1;i<=5;i++) {

     if(i<=3) {
	for(sp=1;sp<=3-i;sp++)
	 cout<<" ";
     }

     else {
	for(sp=1;sp<=i-3;sp++)
	 cout<<" ";
     }

     for(j=1;j<=1;j++)
      cout<<i;

     cout<<endl;
  }

  getch();
 }