#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,j,x;

  for(i=1;i<=6;i++) {

     for(j=1;j<=7-i;j++) {

       if(i%2==0)
	cout<<"1";
       else
	cout<<"0";
     }
     cout<<endl;
  }

  getch();
 }