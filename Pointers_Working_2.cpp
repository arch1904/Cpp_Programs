#include<iostream>
using namespace std;
int main()
{
	system("clear");
	int *ip[5];
	int f=65,s=67,t=69,fo=70,fi=75;
	//Initialize array of pointers by making them point to 5 different ints.
	ip[0]=&f;
	ip[1]=&s;
	ip[2]=&t;
	ip[3]=&fo;
	ip[4]=&fi;
	//print the values being pointed to by the pointers
	for(int i=0;i<5;i++)
	{
		cout<<"The pointer ip[" <<i<<"] points to"<<*ip[i]<<"\n";
		//print the adresses stored in the array
	}
		cout<<"The base adress of array ip of pointers os"<<ip<<"/n";
	 for(int i=0;i<5;i++)
	 {
		cout<<"The address stored in ip["<<i<<"] is "<<ip[i]<<"\n";
	 }
}