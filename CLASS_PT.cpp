#include<iostream.h>
#include<conio.h>
class sample
{
	int x;
	public:
		sample(int i)
		{
			x=i;
			cout<<"Constructing Object With "<<i<<endl;
		}
		~sample()
		{
			cout<<"Destroying Object having "<<x<<endl;
		}
		void put_x(int i)
		{
			x=i;
		}
		int get_x(void)
		{
			return x;
		}
};
void afunc(sample &S1)
{
	S1.put_x(2);
	cout<<"This is x local to afunc()"<<endl;
	cout<<"x="<<S1.get_x()<<endl;
}
void main()
{
	clrscr();
	sample S(1);
	cout<<"This is the x in main()"<<endl;
	cout<<"x="<<S.get_x()<<endl;
	afunc(S);
	cout<<"Back in main()"<<endl;
	getch();
}
