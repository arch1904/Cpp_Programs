//			C++ PROJECT ON BANKING
//*************************************************************************************************
//			HEADER FILE USED IN PROJECT
#include<iostream.h>	//for basic input Output Functions(cin,cout)
#include<fstream.h>	//for Data File Handling
#include<ctype.h>	//for using toupper() Function
#include<conio.h>	//for using clrscr() & getch() Function
#include<stdio.h>	//for using gets() Function
#include<stdlib.h>	//for exit() Function
#include<iomanip.h>	//for setw() Function
//*************************************************************************************************
//			CLASS MADE IN PROJECT
class Account
{
	int acno; 	//Account Number of User
	char name[50];	//Name of User
	char no[15];	//Contact Number of User
	char email[50];	//Email Address of User
	int d;		//Date
	int mm;		//Month
	int y;		//Year
	int age;	//Age of the User
	int balance;	//Balance of the Account
	char type;	//Type of Account

	public:
		void create_account();	//Function to Input Data from user
		void show_account();	//Function to show Data
		void modify();   	//Function to Get New Data from user
		void deposit(int);   	//Function to accept amount and add to Balance of the Account
		void withdraw(int);	//Function to accept amount and subtract from Balance of the Account
		void report();		//Function to show data in tabular format
		int retacno();		//Function to return account number
		int retdeposit();	//Function to return balance of the Account
		char rettype();		//Function to return type of account
};

void Account::create_account()
{
	cout<<endl<<"Enter The account No."<<endl;
	cin>>acno;
	cout<<endl<<"Enter The Name of the Account Holder : "<<endl;
	gets(name);
	cout<<endl<<"Enter the Contact Number of the Account Holder: "<<endl;
	gets(no);
		gets(email);
	cout<<endl<<"Enter the Date of Birth of Account Holder: "<<endl;
	cout<<endl<<"Enter Date(dd): "<<endl;
	int n=0;
	do
	{
		cin>>d;
		if(d>=1&&d<=31)
		{
			n=0;
		}
		else
		{
			n=1;
			cout<<"Enter Values Between 1 and 31 only"<<endl;
		}
	}while(n==1);
	cout<<endl<<"Enter Month(mm): "<<endl;
	n=0;
	do{

	cin>>mm;
	if(mm>=1&&mm<=12)
	{
		n=0;
	}
	else
	{
		n=1;
		cout<<" Enter values between 1 and 12 only"<<endl;
	}
	}while(n==1);
	n=0;

	cout<<endl<<"Enter Year(yyyy): "<<endl;
	do{

		cin>>y;
		if(y>2015)
		{
			cout<<"Invalid Year Enter Year"<<endl;
			n=1;
		}
		else
			n=0;
	}while(n==1);
	age=2015-y;
	if(age>=18)
	{
		cout<<endl<<"Eligible to Create an account! Please Proceed!"<<endl;
		cout<<endl<<"Enter Type of the account (Current(C)/Saving(S)) : "<<endl;
		cin>>type;
		type=toupper(type);
		cout<<endl<<"Enter The Initial Amount \n(More than Rs. 500 for Saving and More than Rs. 1000 for Current) : "<<endl;
		cin>>balance;
		cout<<endl<<"\t\t Account Created... \t\t"<<endl;
	}
	else
	{
		cout<<endl<<"Sorry You are Under the age of 18! "<<endl;
		getch();
		exit(0);
	}
}

void Account::show_account()
{
	cout<<endl<<"Account No. : "<<acno<<endl;
	cout<<endl<<"Name : "<<name<<endl;
	cout<<endl<<"Date of birth: "<<d<<"/"<<mm<<"/"<<y<<endl;
	cout<<endl<<"Age: "<<age<<endl;
	cout<<endl<<"Contact Number: "<<no;
	cout<<endl<<"Email Address: "<<email;
	cout<<endl<<"Type of Account : "<<type<<endl;
	cout<<endl<<"Balance Amount : "<<balance<<endl;
}

void Account::modify()
{
	cout<<endl<<"The account No."<<acno<<endl;
	cout<<endl<<"Enter The Name of the Account Holder : "<<endl;
	gets(name);
	cout<<endl<<"Enter the Contact Number of the Account Holder: "<<endl;
	gets(no);
	cout<<endl<<"Enter the Email Address of the Account Holder: "<<endl;
	gets(email);
	cout<<endl<<"Enter Type of the account (Current(C)/Saving(S)) : "<<endl;
	cin>>type;
	type=toupper(type);
}


void Account::deposit(int x)
{
	balance+=x;
}

void Account::withdraw(int x)
{
	balance-=x;
}

void Account::report()
{
	cout<<endl<<"==============================================================================="<<endl;
	cout<<"A/c No."<<setw(5)<<"Name"<<setw(8)<<"DOB"<<setw(17)<<"Contact No."<<setw(15)<<"Email Address"<<setw(17)<<"Type"<<setw(10)<<"Balance";
	cout<<endl<<"==============================================================================="<<endl;
	cout<<acno<<setw(9)<<name<<setw(4)<<d<<"/"<<mm<<"/"<<y<<setw(12)<<no<<setw(28)<<email<<"   "<<type<<setw(10)<<balance;
	cout<<endl<<"===============================================================================";
}

int Account::retacno()
{
	return acno;
}

int Account::retdeposit()
{
	return balance;
}

char Account::rettype()
{
	return type;
}

//*************************************************************************************************
//    	Function Declarations

void write_account();			//Function to Write the Record in binary file
void display_account(int);		//Function to Display Account details given by user
void modify_account(int);		//Function to Modify record of file
void delete_account(int);		//Function to Delete record of file
void display_all();			//Function to Display all account details
void deposit_withdraw(int, int);	//Function to Desposit/Withdraw amount for given account

//*************************************************************************************************
//    	THE MAIN FUNCTION OF PROGRAM

void main()
{
	clrscr();
	char ch;
	int choice,num;
	cout<<endl<<endl<<"\t\tC++ PROJECT ON `BANKING' \t\t"<<endl;
	cout<<endl<<endl<<"\t MADE BY : Archit Gupta and Dhruv Sachdeva \t"<<endl;
	cout<<endl<<endl<<"\t SCHOOL : The Heritage School, Rohini \t"<<endl;
	cout<<endl<<endl<<endl<<endl<<endl<<"\t Press Enter to Continue... \t"<<endl<<endl;
	getch();
	do
	{
		clrscr();
		cout<<endl<<endl<<"\t\t MAIN MENU \t\t"<<endl;
		cout<<endl<<"\t 01. NEW ACCOUNT"<<endl;
		cout<<endl<<"\t 02. DEPOSIT AMOUNT"<<endl;
		cout<<endl<<"\t 03. WITHDRAW AMOUNT"<<endl;
		cout<<endl<<"\t 04. BALANCE ENQUIRY"<<endl;
		cout<<endl<<"\t 05. DISPLAY LIST OF ALL ACCOUNT HOLDERS"<<endl;
		cout<<endl<<"\t 06. CLOSE AN ACCOUNT"<<endl;
		cout<<endl<<"\t 07. MODIFY AN ACCOUNT"<<endl;
		cout<<endl<<"\t 08. EXIT"<<endl;
		cout<<endl<<endl<<"\t Select Your Option (1-8) "<<endl;
		cin>>choice;
		clrscr();
		switch(choice)
		{
			case 1:
				cout<<endl<<endl<<"\t\t CREATE NEW ACCOUNT! \t\t"<<endl;
				write_account();
				break;
			case 2:
				cout<<endl<<endl<<"\t\t DEPOSIT AMOUNT! \t\t"<<endl;
				cout<<endl<<"\t Enter the Account No. : "<<endl;
				cin>>num;
				deposit_withdraw(num,1);
				break;
			case 3:
				cout<<endl<<endl<<"\t\t WITHDRAW AMOUNT! \t\t"<<endl;
				cout<<endl<<"\t Enter the Account No. : "<<endl;
				cin>>num;
				deposit_withdraw(num, 2);
				break;
			case 4:
				cout<<endl<<endl<<"\t\t BALANCE ENQUIRY! \t\t"<<endl;
				cout<<endl<<"\t Enter the Account No. : "<<endl;
				cin>>num;
				display_account(num);
				break;
			case 5:
				cout<<endl<<endl<<"\t\t LIST OF ALL THE ACCOUNT HOLDERS! \t\t"<<endl;
				display_all();
				break;
			case 6:
				cout<<endl<<endl<<"\t\t CLOSE THE ACCOUNT! \t\t"<<endl;
				cout<<endl<<"\t Enter the Account No. : ";
				cin>>num;
				delete_account(num);
				break;
			case 7:
				cout<<endl<<endl<<"\t\t MODIFY THE ACCOUNT! \t\t"<<endl;
				cout<<endl<<"\t Enter the Account No. : ";
				cin>>num;
				modify_account(num);
				break;
			case 8:
				cout<<endl<<endl<<"\t\t EXIT! \t\t"<<endl;
				cout<<endl<<"\t Thanks for using Banking Management System!"<<endl<<"\t Have a Good Day.:)"<<endl;
				break;

			default :
				cout<<"\a";
		}
		getch();
	}
	while(choice!=8);
	getch();
}
//*************************************************************************************************
//		Function to Write in file

void write_account()
{
	Account ac;
	ofstream fout;
	fout.open("Account.dat",ios::binary|ios::app);
	ac.create_account();
	fout.write((char*)&ac,sizeof(ac));
	fout.close();
}

//*************************************************************************************************
//    		Function to Read specific record from file

void display_account(int n)
{
	Account ac;
	int flag=0;
	ifstream fin;
	fin.open("Account.dat",ios::binary);
	if(!fin)
	{
		cout<<endl<<"File could not be open !! Press any Key..."<<endl;
		return;
	}
	cout<<endl<<endl<<"\t\t BALANCE DETAILS \t\t"<<endl;
	while(fin.read((char *)&ac, sizeof(ac)))
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			flag=1;
		}
	}
	fin.close();
	if(flag==0)
	cout<<endl<<"ERROR!"<<endl<<"Account number does not exist!"<<endl;
}

//*************************************************************************************************
//    	Function to Modify record of file

void modify_account(int n)
{
	int found=0;
	Account ac;
	fstream F;
	F.open("Account.dat",ios::binary|ios::in|ios::out);
	if(!F)
	{
		cout<<endl<<"File could not be open !! Press any Key..."<<endl;
		return;
	}
	while(F.read((char *)&ac, sizeof(ac)) && found==0)
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			cout<<endl<<"Enter The New Details of account"<<endl;
			ac.modify();
			int pos=(-1)*sizeof(ac);
			F.seekp(pos,ios::cur);
			F.write((char *)&ac, sizeof(ac));
			cout<<endl<<"\t Record Updated! \t"<<endl;
			found=1;
		}
	}
	F.close();
	if(found==0)
	{
		cout<<endl<<endl<<"\t\t Record Not Found! \t\t"<<endl;
	}
}

//*************************************************************************************************
//    		Function to Delete record of file

void delete_account(int n)
{
	Account ac;
	ifstream fin;
	ofstream fout;
	fin.open("Account.dat",ios::binary);
	if(!fin)
	{
		cout<<endl<<"File could not be open !! Press any Key..."<<endl;
		return;
	}
	fout.open("Temp.dat",ios::binary);
	fin.seekg(0,ios::beg);
	while(fin.read((char *)&ac, sizeof(ac)))
	{
		if(ac.retacno()!=n)
		{
			fout.write((char *)&ac, sizeof(ac));
		}
	}
	fin.close();
	fout.close();
	remove("Account.dat");
	rename("Temp.dat","account.dat");
	cout<<endl<<endl<<"\t\t Record Deleted... \t\t"<<endl;
}

//*************************************************************************************************
//	    	Function to Display List of all Accounts

void display_all()
{
	Account ac;
	ifstream fin;
	fin.open("Account.dat",ios::binary);
	if(!fin)
	{
		cout<<endl<<"File could not be open !! Press any Key..."<<endl;
		return;
	}
	cout<<endl<<endl<<"\t\t ACCOUNT HOLDER LIST \t\t"<<endl;
	while(fin.read((char *)&ac, sizeof(ac)))
	{
		ac.report();
	}
	fin.close();
}

//*************************************************************************************************
//    	Function to Deposit and Withdraw from Account

void deposit_withdraw(int n, int option)
{
	int amnt;
	int found=0;
	Account ac;
	fstream F;
	F.open("Account.dat", ios::binary|ios::in|ios::out);
	if(!F)
	{
		cout<<endl<<"File could not be open !! Press any Key..."<<endl;
		return;
	}
	while(F.read((char *)&ac, sizeof(ac)) && found==0)
	{
		if(ac.retacno()==n)
		{
			ac.show_account();
			if(option==1)
			{
				cout<<endl<<endl<<"\t\t DEPOSITE AMOUNT IN THE ACCOUNT! \t\t"<<endl;
				cout<<endl<<"Enter the Amount to be deposited"<<endl;
				cin>>amnt;
				ac.deposit(amnt);
			}
			if(option==2)
			{
				cout<<endl<<endl<<"\t\t WITHDRAW AMOUNT FROM THE ACCOUNT! \t\t"<<endl;
				cout<<endl<<"Enter the amount to be withdrawn"<<endl;
				cin>>amnt;
				int bal=ac.retdeposit()-amnt;
				if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
				{
					cout<<endl<<"Insufficience balance to withdraw from Account"<<endl;
				}
				else
				{
					ac.withdraw(amnt);
				}
			}
			int pos=(-1)* sizeof(ac);
			F.seekp(pos,ios::cur);
			F.write((char *)&ac, sizeof(ac));
			cout<<endl<<endl<<"\t\t Record Updated! \t\t"<<endl;
			found=1;
		}
	}
	F.close();
	if(found==0)
	{
		cout<<endl<<"Record Not Found!"<<endl;
	}
}
//*************************************************************************************************
//    			END OF PROJECT
//*************************************************************************************************