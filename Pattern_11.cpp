#include<iostream>
using namespace std;
int main()
 {
  system("clear");
  int i,j,x;

  for(i=1;i<=5;i++) {

     for(j=1;j<=i;j++) {

	if(j%2==0)
	 cout<<"0";
	else
	 cout<<"1";
     }
     cout<<endl;
  }
 }