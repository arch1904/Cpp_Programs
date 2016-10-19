#include<iostream.h>
#include<conio.h>
void main()
{       clrscr();
	int Values[]={2,4,8,10};
	int *ptr=Values;
	for(int C=0;C<3;C++)
	{
		cout<<*ptr<<"@";
		ptr++;
	}
	cout<<endl<<*ptr<<endl;7
	for(C=0;C<4;C++)
	{
		(*ptr)*=3;
		--ptr;
	}
	for(C=0;C<4;C++)
	{
		cout<<Values[C]<<"%";
		cout<<endl;
	}
	getch();
}