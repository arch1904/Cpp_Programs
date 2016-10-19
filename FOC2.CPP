#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,j,z,x;

  for(i=1,z=1;i<=5;i++,z++) {

     for(x=5;x>=1;x--) {

       if(x==z)
	cout<<"*";
       else
	cout<<x;
     }
     cout<<endl;
  }

  getch();
 }