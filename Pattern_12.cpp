#include<iostream>
using namespace std;
int main()
 {
  system("clear");
  int i,j,x,sp;

  for(i=1;i<=7;i++) {

     if(i<=4) {

       for(x=2;x>=1;x--) {

	 for(j=1;j<=5-i;j++)
	   cout<<"*";

	 for(sp=1;sp<=2*(i-1);sp++)
	   cout<<" ";

       }
       cout<<endl;
     }

     else {

	for(x=2;x>=1;x--) {

	  for(j=1;j<=i-3;j++)
	    cout<<"*";

	  for(sp=1;sp<=2*(7-i);sp++)
	    cout<<" ";

	}
	cout<<endl;
     }
  }
 }