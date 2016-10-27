#include<iostream>
using namespace std;
int main()
 {
  system("clear");
  int i,j,x,z;

  for(i=3;i<=8;i++) {

     for(j=1,x=1;j<=i-2;j++,x++) {


	if(i%3==0) {
	 z=1;
	 cout<<z*x;
	}

	if(i%3==1) {
	 z=2;
	 cout<<z*x;
	}

	if(i%3==2) {
	 z=3;
	 cout<<z*x;
	}
     }
     cout<<endl;
  }
 }