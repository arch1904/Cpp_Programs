#include<iostream>
using namespace std;
int main()
 {
  system("clear");
  int i,j,x,b,sum;
  char ch,c;

  for(i=1;i<=5;i++) {

     for(j=1,c='A',x=1,ch='A';j<=i;j++,ch=c+x*i,x++) {
      cout<<ch; }

     cout<<endl;
  }
 }