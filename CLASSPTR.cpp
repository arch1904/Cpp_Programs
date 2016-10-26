#include<iostream.h>
#include<conio.h>
class time
{
	short int hh,mm,ss;
	public:
		time(){hh=mm=ss=0;}
		void getdata(int i,int j,int k)
		{
			hh=i;
			mm=j;
			ss=k;
		}
		void prndata(void)
		{
			cout<<endl<<"Time is"<<hh<<":"<<mm<<":"<<ss<<endl;
		}
};
void main()
{
	clrscr();
	time t1,*tp;
	cout<<"Initializing data members using the object , with values 12,22,10";
	t1.getdata(12,22,10);
	cout<<"Printing members using the object";
	t1.prndata();
	tp=&t1;
	cout<<"Printing members using the object pointer";
	tp->prndata();
	cout<<"Initializing data members using the object pointer,"<<"with values 15,10,17"<<endl;
	tp->getdata(15,10,17);
	cout<<"Printing members using the object";
	t1.prndata();
	cout<<"Printing members using the object pointer";
	tp->prndata();
	getch();
}