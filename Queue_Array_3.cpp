#include<iostream>
using namespace std;
int main()
{
	system("clear");
	int a[10],f=-1,r=-1,i=0,j,b;
	char c;
	do{ system("clear");
		cout<<"Insert Press 1"<<endl;
		cout<<"Delete Press 2"<<endl;
		cout<<"Display Press 3"<<endl;
		cout<<"Exit Press 4"<<endl;
		cin>>b;
		cout<<endl;
		if(b==1)
		{ if(f==-1&&r==-1)
			{
				cin>>a[0];
				cout<<endl;
				f=0;
				r=0;
			}
		   else if(f==0&&r>=0)
		   {
		       cin>>a[++r];
		   }
		    if(r==9&&f>0)
		   {
			r=0;
		       cin>>a[r];
		   }
		   else if(f>0&&r<f)
		   {
			r++;
		       cin>>a[r];
		   }
		}
		if(b==2)
		{
			f++;
		}
		if(b==3)
		{
			for(i=0;i<10;i++)
			{
				cout<<a[i]<<endl;
			}
		}
		if(b==4)
		{
			exit(1);
		}
		cout<<endl<<"Do You Want To Continue?Y/N"<<endl;
		cin>>c;
	}while(c=='y'||c=='Y');
}