#include<iostream.h>
#include<conio.h>
void main()
 {
  clrscr();
  int i,j,x,z,b;
  char c,ch;

  for(i=2,ch='A',z=1;i<=7;i++) {

     if(i%2==0) {
	   for(x=1;x<=i;x++) {
	    cout<<ch; }
	   ch++;
     }

     else {
	  for(x=1;x<=i;x++) {
	   cout<<z; }
	  z++;
     }

     cout<<endl;
  }

  getch();
 }