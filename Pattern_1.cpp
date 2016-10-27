#include<iostream>
using namespace std;
int main()
 {
  system("clear");
  int i,j,n,c,r,sp,a,b,x,z,q;

  for(i=1;i<=6;i++) {

    for(sp=1;sp<=6-i;sp++)
     cout<<" ";

    for(j=1,b=1;j<=i;j++,b++) {

	for(a=i,n=1;a>=1;a--)   //for n!
	  n=n*a;

	n=n/i;

	for(r=1,q=b;q>=1;q--)      //for r!
	 r=r*q;

	r=r/j;

	for(x=i-j+1,z=1;x>=1;x--)   //for (n-r)!
	  z=z*x;

	z=z/(i-j+1);

	c=n/(r*z);
	cout<<c<<" ";

    }
    cout<<endl;
  }
 }