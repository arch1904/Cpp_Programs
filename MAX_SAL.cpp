#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class salesman
{
	char name[11];
	float q1_sal,q2_sal,q3_sal,q4_sal,tot_sal;
	public:
	salesman()
	{
		strcpy(name," ");
		q1_sal=q2_sal=q3_sal=q4_sal=tot_sal=0;
	}
	void getdata(char*s,float i,float j,float k,float l)
	{
		strcpy(name,s);
		q1_sal=i;
		q2_sal=j;
		q3_sal=k;
		q4_sal=l;
	}
	void calc_tot()
	{
		tot_sal=q1_sal+q2_sal+q3_sal+q4_sal;
	}
	char *get_name() {return name;}
	float get_q1() {return q1_sal;}
	float get_q2() {return q2_sal;}
	float get_q3() {return q3_sal;}
	float get_q4() {return q4_sal;}
	float get_tot() {return tot_sal;}
	salesman *max_sal(salesman *s)
	{
		if(!s)s=this;
		else
		{
			float f1,f2;
			f1=s->get_tot();
			f2=this->get_tot();
			if(f1<f2)
			s=this;
		}
		return s;
	}
};
salesman *sp;
void printit(salesman *sp)
{
	cout<<endl<<"Salesman with Maximum Sales"<<endl;
	cout<<"Name:";
	char*ss=sp->get_name();
	cout.write(ss,11),puts("\n");
	cout<<"Total Sales:"<<sp->get_tot()<<"\n";
}
void main()
{
	clrscr();
	salesman Raman,Sita,Vedant,Anubhav,Bina;
	float q1,q2,q3,q4;
	sp=&Raman;
	cout<<"Enter sales in four quarters for Sita"<<endl;
	cin>>q1>>q2>>q3>>q4;
	Raman.getdata("Raman",q1,q2,q3,q4);
	Raman.calc_tot();
	sp=Raman.max_sal(sp);
	cout<<"Enter sales in four quarters for Sita"<<endl;
	cin>>q1>>q2>>q3>>q4;
	Sita.getdata("Sita",q1,q2,q3,q4);
	Sita.calc_tot();
	sp=Sita.max_sal(sp);
	cout<<"Enter sales in four quarters for Vedant"<<endl;
	cin>>q1>>q2>>q3>>q4;
	Vedant.getdata("Vedant",q1,q2,q3,q4);
	Vedant.calc_tot();
	sp=Vedant.max_sal(sp);
	cout<<"Enter sales in four quarters for Anubhav"<<endl;
	cin>>q1>>q2>>q3>>q4;
	Anubhav.getdata("Anubhav",q1,q2,q3,q4);
	Anubhav.calc_tot();
	sp=Anubhav.max_sal(sp);
	cout<<"Enter sales in four quarters for Bina"<<endl;
	cin>>q1>>q2>>q3>>q4;
	Bina.getdata("Bina",q1,q2,q3,q4);
	Bina.calc_tot();
	sp=Bina.max_sal(sp);
	printit(sp);
	getch();
}
