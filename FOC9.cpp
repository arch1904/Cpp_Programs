#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,j,x;

  for(i=1,x=1;i<=5;i++,x++) {

     for(j=1;j<=5;j++) {

	if(j==x)
	 cout<<"*";
	else
	 cout<<"&";
     }
     cout<<endl;
  }

  getch();
 }