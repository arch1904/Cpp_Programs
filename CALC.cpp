#include<iostream.h>
#include<conio.h>
void main()
{
	int a,c,d;
	float ans;
	char b;
	do
       {
		clrscr();
		cout<<"Enter your first number\n";
		cin>>c;
		cout<<"Enter your second number\n";
		cin>>d;
		cout<<"Enter '1' for +\n";
		cout<<"Enter '2' for -\n";
		cout<<"Enter '3' for *\n";
		cout<<"Enter '4' for /\n";
		cin>>a;
		cout<<endl;
		if (a==1)
		{       ans=c+d;
			cout<<ans<<endl;
		}
		else if(a==2)
		{       ans=c-d;
			cout<<ans<<endl;
		}
		else if(a==3)
		{       ans=c*d;
			cout<<ans<<endl;
		}
		else if(a==4)
		{       ans=float(c)/d;
			cout<<ans<<endl;
		}
		cout<<"Do you want to continue? Y/N\n";
		cin>>b;
       }while(b=='y');

	getch();
}


