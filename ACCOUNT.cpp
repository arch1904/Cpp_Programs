#include<iostream.h>
#include<conio.h>
int deposit;
int withdraw;
class account
{
	private:
		char name[30];
		int account_no;
		char type;
		int balance_amount;
	public:
		account();
		void deposit();
		void withdraw();
		void display_particular();
		void diplay_all();
};
void account::account()
{
	strcpy(name,"Default");
	account_no= 0;
	type='ND';
	balance_amount=0;
}
void account::deposit()
{
	cout<<"Enter Name"<<endl;
	gets(name);
	cout<<endl<<"Enter Account No."<<endl;
	cin>>account_no;
	cout<<endl<<"Enter Account Type (S-Savings and C-Current)"<<endl;
	cin>>type;
	if(type!='C'||type!='S')
	{
		cout<<endl<<"Error!"<<endl;
		cout<<endl<<"Re-enter Account Type"<<endl;
		cin>>type;
	}

	cout<<endl<<"Enter Balance Amount"<<endl;
	cin>>balance_amount;
	cout<<endl<<"Enter Amount To Be Deposited"<<endl;
	cin>>deposit;
	cout<<endl<<"Congratulations Your Money Has Been Deposited";
	balance_amount= balance_amount + deposit;
}
void account::withdraw()
{
		cout<<"Enter Name"<<endl;
	gets(name);
	cout<<endl<<"Enter Account No."<<endl;
	cin>>account_no;
	cout<<endl<<"Enter Account Type (S-Savings and C-Current)"<<endl;
	cin>>type;
	if(type!='C'||type!='S')
	{
		cout<<endl<<"Error!"<<endl;
		cout<<endl<<"Re-enter Account Type"<<endl;
		cin>>type;
	}

	cout<<endl<<"Enter Balance Amount"<<endl;
	cin>>balance_amount;
	cout<<endl<<"Enter Amount To Be Withdrawn"<<endl;
	cin>>withdraw;
	cout<<endl<<"Congratulations Your Money Has Been Deposited";
	balance_amount= balance_amount - withdraw;
}
void account::display_particular()
{
