
//*******************************************************************
//*******************************************************************
//		      PROJECT :	VIDEO LIBRARY
//*******************************************************************
//*******************************************************************


//*******************************************************************
// Header files included
//*******************************************************************

#include<process.h>
#include<dos.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

//*******************************************************************
// Class controlling functiions of CD and member
//*******************************************************************

class CD
{
		char mname[20],dname[20],mlead[20],flead[20] ;
		int rat ;
	public:
		int code ;
		char status ;
		void getdata(int n) ;
		void display() ;
		int matchd(char* n) ;
		int matchm(char* n) ;
		int matchcd(int n) ;
		int matchml(char* n) ;
		int matchfl(char* n) ;
} ob ;

class member
{
		char cname[20],ads[30] ;
		long int phone ;
	public:
		int cdcode,ccode ;
		void add(int n) ;
		void showdata() ;
		int matchn(char *n) ;
		int matchp(long int n) ;
		int matchc(int n) ;
} mb ;

//*******************************************************************
// Function to reset/add data
//*******************************************************************

void CD::getdata(int n=1)
{
	int i ;
	cout<<" Movie Name : " ;
	gets(mname) ;
	fflush(stdin) ;
	cout<<" Directed By: " ;
	gets(dname) ;
	fflush(stdin) ;
	cout<<" Male Lead : " ;
	gets(mlead) ;
	fflush(stdin);
	cout<<" Female Lead : " ;
	gets(flead) ;
	cout<<" Enter Ratings(1-5) : " ;
	cin>>rat ;
	code=n;
	status='A' ;
}

void member::add(int n=1)
{
	cdcode=0 ;
	cout<<" Enter Name : " ;
	gets(cname) ;
	fflush(stdin) ;
	cout<<" Enter Addrress : " ;
	gets(ads) ;
	fflush(stdin) ;
	cout<<" Phone No. : " ;
	cin>>phone ;
	ccode=n ;
}

//*******************************************************************
// Function to display cd/customer data
//*******************************************************************

void CD::display()
{
	int i ;
	cout<<" Code : "<<code<<endl ;
	cout<<" Movie Name : " ;
	puts(mname) ;
	cout<<" Director Name : " ;
	puts(dname) ;
	cout<<" Male Lead : " ;
	puts(mlead) ;
	cout<<" Female Lead : " ;
	puts(flead) ;
	cout<<" Status : " ;
	putchar(status) ;
	cout<<endl<<"Ratings : " ;
	for(i=0;i<rat;i++)
		cout<<"*" ;
	if(rat==1)
		cout<<"(Poor) " ;
	if(rat==2)
		cout<<"(Average) " ;
	if(rat==3)
		cout<<"(Good) " ;
	if(rat==4)
		cout<<"(Very Good) " ;
	if(rat==5)
		cout<<"(Excillent) " ;
	cout<<endl<<"--------------------------------------------------------------------" ;
}

void member::showdata()
{
	cout<<" Customer Code : "<<ccode<<endl ;
	cout<<" Customer name : " ;
	puts(cname) ;
	cout<<" Addrress : " ;
	puts(ads) ;
	cout<<" Phone no. : "<<phone<<endl ;
	if(cdcode!=0)
		cout<<" Code Of Cd Issued To Member : "<<cdcode<<endl ;
	else
		cout<<" No Cd Issued To Member  "<<endl ;
	cout<<"--------------------------------------------------------------------" ;
}

//*******************************************************************
// Function to search CD records by director/movie/female lead/code
// male lead/ratings and member record by name/phone
//*******************************************************************

int CD::matchcd(int n)
{
	int k=1 ;
	if(code==n)
		k=0 ;
	return k ;
}

int CD::matchd(char*n)
{
	int k=1 ;
	k=strcmpi(dname,n) ;
	return k ;
}

int CD::matchm(char*n)
{
	int k=1 ;
	k=strcmpi(mname,n) ;
	return k ;
}

int CD::matchfl(char*n)
{
	int k=1 ;
	k=strcmpi(flead,n) ;
	return k ;
}

int CD::matchml(char*n)
{
	int k=1 ;
	k=strcmpi(mlead,n) ;
	return k ;
}

int member::matchn(char*n)
{
	int k=1 ;
	k=strcmpi(cname,n) ;
	return k ;
}

int member::matchp(long int n)
{
	int k=1 ;
	if(phone==n)
		k=0 ;
	return k ;
}

int member::matchc(int n)
{
	int k=1 ;
	if(ccode==n)
		k=0 ;
	return k ;
}

//*******************************************************************
// Main for menu and calling of functions
//*******************************************************************

void main()
{
	int i,ap,k,m,cht,h ;
	long int n ;
	char na[20],ch,c,a,co ;
	fstream f1 ;
	fstream f2 ;
	while(1)
	{
		textmode(C40) ;
		clrscr() ;
		cout<<"\n\n\n\n\t\t MAIN MENU "<<endl ;
		cout<<"\t\t-----------"<<endl<<endl ;
		delay(100) ;
		cout<<"\t      1: CUSTOMER MENU "<<endl ;
		delay(100) ;
		cout<<"\t      2: CD MENU "<<endl ;
		delay(100) ;
		cout<<"\t      3: ISSUE AND RETURN "<<endl;
		delay(100) ;
		cout<<"\t      0: EXIT "<<endl<<endl ;
		cout<<"\n\t Enter Choice : " ;
		ch=getch() ;
		textmode(C80) ;
		switch(ch)
		{

			case '1':
				while(ch!='0')
				{
					clrscr() ;
					textmode(C40) ;
					cout<<"\n\n\n\n\t\t CUSTOMER MENU "<<endl ;
					cout<<"\t\t---------------"<<endl<<endl ;
					delay(100) ;
					cout<<"\t    1: RESET DATA "<<endl ;
					delay(100) ;
					cout<<"\t    2: DISPLAY ALL "<<endl ;
					delay(100) ;
					cout<<"\t    3: ADD MEMBER "<<endl ;
					delay(100) ;
					cout<<"\t    4: SEARCH DATA "<<endl ;
					delay(100) ;
					cout<<"\t    5: EDIT DATA "<<endl ;
					delay(100) ;
					cout<<"\t    0: EXIT "<<endl ;
					delay(100) ;
					cout<<"\n\t Enter Choice : " ;
					ch=getch() ;
					textmode(C80) ;
					switch(ch)
					{
						case '1':
							clrscr() ;
							char *pass ;
							cout<<endl<<endl;
							pass = getpass (" Enter password :") ;
							if(strcmpi(pass,"deepak") == 0)
							{
								f1.open("he",ios::out|ios::binary) ;
								cout<<endl<<" Enter no. of records : " ;
								cin>>n ;
								for(i=1;i<=n;i++)
								{
									cout<<endl<<" MEMBER#"<<i<<endl ;
									mb.add(i) ;
									f1.write((char*)&mb,sizeof(mb)) ;
								}
								f1.close() ;
							}
							else
							{
								cout<<endl<<" Wrong password " ;
								getch() ;
							}
							break ;
						case '2':
							clrscr() ;
							f1.open("he",ios::in|ios::binary) ;
							f1.read((char*)&mb,sizeof(mb)) ;
							while(!f1.eof())
							{
								cout<<endl<<endl<<endl ;
								mb.showdata() ;
								getch() ;
								f1.read((char*)&mb,sizeof(mb)) ;
							}
							f1.close() ;
							break ;
						case '3':
							clrscr() ;
							f1.open("he",ios::in|ios::binary) ;
							f1.seekg(0,ios::beg);
							f1.seekg(0,ios::end) ;
							cht=f1.tellg() ;
							n=cht/sizeof(mb) ;
							f1.seekg((n-1),ios::beg);
							cht=mb.ccode ;
							f1.close() ;
							f1.open("he",ios::app|ios::binary) ;
							cout<<endl<<endl<<" No. of records you want to add : " ;
							cin>>ap ;
							for(i=1;i<=ap;i++)
							{
								cout<<endl<<endl ;
								cout<<" Member#"<<n+i<<endl ;
								mb.add(cht+i) ;
								f1.write((char*)&mb,sizeof(mb)) ;
							}
							f1.close() ;
							break ;
						case '4':
							c='7' ;
							while(c!='0')
							{
								clrscr() ;
								textmode(C40) ;
								cout<<"\n\n\n\n\t\t SEARCH MENU "<<endl ;
								cout<<"\t\t-------------"<<endl<<endl ;
								delay(100) ;
								cout<<"\t    1: SEARCH BY NAME "<<endl ;
								delay(100) ;
								cout<<"\t    2: SEARCH BY PHONE NO. "<<endl ;
								delay(100) ;
								cout<<"\t    3: SEARCH BY CODE "<<endl ;
								delay(100) ;
								cout<<"\t    0: EXIT "<<endl ;
								delay(100) ;
								cout<<"\n\t Enter Choice : " ;
								c=getch() ;
								textmode(C80) ;
								cout<<endl ;
								switch(c)
								{
									case '1':
										h=0 ;
										clrscr() ;
										cout<<" Enter Cutomer Name : " ;
										gets(na) ;
										f1.open("he",ios::in|ios::binary) ;
										f1.read((char*)&mb,sizeof(mb)) ;
										while(!f1.eof())
										{
											m=mb.matchn(na) ;
											if(m==0)
											{
												cout<<endl<<endl ;
												mb.showdata() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&mb,sizeof(mb)) ;
										}
										if(h==0)
										{
											cout<<" No match "<<endl ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '2':
										h=0 ;
										clrscr() ;
										cout<<" Enter Phoneno. : " ;
										cin>>n ;
										f1.open("he",ios::in|ios::binary) ;
										f1.read((char*)&mb,sizeof(mb)) ;
										while(!f1.eof())
										{
											m=mb.matchp(n) ;
											if(m==0)
											{
												cout<<endl<<endl ;
												mb.showdata() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&mb,sizeof(mb)) ;
										}
										if(h==0)
										{
											cout<<" No Match "<<endl ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '3':
										clrscr() ;
										h=0 ;
										cout<<" Enter Code : " ;
										cin>>n ;
										f1.open("he",ios::in|ios::binary) ;
										f1.read((char*)&mb,sizeof(mb)) ;
										while(!f1.eof())
										{
											m=mb.matchc(n) ;
											if(m==0)
											{
												cout<<endl<<endl ;
												mb.showdata() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&mb,sizeof(mb)) ;
										}
										if(h==0)
										{
											cout<<" No Match "<<endl ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '0':
										break ;
									default :
										cout<<endl<<" Enter Correct Choice " ;
										getch() ;
								}
							}
							break;
						case '5':
							a = '7';
							while(a!='0')
							{
								clrscr() ;
								textmode(C40) ;
								cout<<"\n\n\n\n\t\t EDIT MENU"<<endl ;
								cout<<"\t\t-----------"<<endl<<endl ;
								delay(100) ;
								cout<<"\t     1: DELETE DATA "<<endl ;
								delay(100) ;
								cout<<"\t     2: MODIFY DATA "<<endl ;
								delay(100) ;
								cout<<"\t     0: Exit "<<endl<<endl ;
								cout<<"\n\t Enter Choice : " ;
								a=getch() ;
								textmode(C80) ;
								cout<<endl ;
								switch(a)
								{
									case '1':
										int match=0 ;
										h=0 ;
										clrscr() ;
										cout<<endl<<" Enter Member Name : ";
										gets(na);
										f1.open("he",ios::in|ios::binary) ;
										f2.open("new",ios::out,ios::binary) ;
										f1.read((char*)&mb,sizeof(mb)) ;
										while(!f1.eof())
										{
											k=mb.matchn(na) ;
											if(k==0)
											{
												cout <<endl<<" This record will be deleted " ;
												cout<<endl<<endl ;
												mb.showdata() ;
												match = 1 ;
												h = 1 ;
												getch() ;
											}
											if ( match == 0 )
											{
												f2.write((char*)&mb,sizeof(mb)) ;
											}
											match =0 ;
											f1.read((char*)&mb,sizeof(mb)) ;
										}
										if(h==0)
										{
											cout<<" No match " ;
											getch() ;
										}
										f1.close() ;
										f2.close() ;
										f1.open("new",ios::in|ios::binary) ;
										f2.open("he",ios::out|ios::binary) ;
										f1.read((char*)&mb,sizeof(mb)) ;
										while(!f1.eof())
										{
											f2.write((char*)&mb,sizeof(mb)) ;
											f1.read((char*)&mb,sizeof(mb)) ;
										}
										f1.close() ;
										f2.close() ;
										break;
									case '2':
										h=0;
										clrscr() ;
										cout<<endl<<" Enter Member Name : " ;
										gets(na) ;
										fflush(stdin) ;
										f1.open("he",ios::in|ios::binary) ;
										i=1 ;
										f1.read((char*)&mb,sizeof(mb)) ;
										while(!f1.eof())
										{
											k=mb.matchn(na) ;
											if(k==0)
											{
												cout<<endl<<" This record will be modified " ;
												cout<<endl<<endl ;
												ap=mb.ccode ;
												mb.showdata() ;
												getch() ;
												h=1 ;
												m=i ;
												break;
											}
											i++ ;
											f1.read((char*)&mb,sizeof(mb)) ;
										}
										if(h==0)
										{
											cout<<endl<<" No match "<<endl ;
											getch() ;
										}
										f1.close() ;
										if(h==1)
										{
											f1.open("he",ios::binary|ios::in|ios::out) ;
											cout<<endl<<endl<<" Enter new record "<<endl<<endl ;
											mb.add(ap) ;
											f1.seekg((m-1)*sizeof(mb),ios::beg) ;
											f1.write((char*)&mb,sizeof(mb)) ;
											f1.close() ;
										}
										break ;
									case '0':
										break ;
									default :
										cout<<endl<<" Enter Correct Choice  " ;
										getch() ;
								}
							}
							break ;
						case '0':
							break ;
						default :
							cout<<endl<<" Enter Correct Choice " ;
							getch() ;
					}
				}
				break ;
			case '2':
				while(ch!='0')
				{
					clrscr();
					textmode(C40) ;
					cout<<"\n\n\n\n\t\t CD MENU "<<endl ;
					cout<<"\t\t--------- "<<endl<<endl ;
					delay(100);
					cout<<"\t    1: RESET DATA "<<endl ;
					delay(100) ;
					cout<<"\t    2: DISPLAY DATA "<<endl ;
					delay(100) ;
					cout<<"\t    3: ADD DATA "<<endl ;
					delay(100) ;
					cout<<"\t    4: SEARCH DATA "<<endl ;
					delay(100) ;
					cout<<"\t    5: EDIT DATA "<<endl ;
					delay(100) ;
					cout<<"\t    0: Exit "<<endl<<endl ;
					delay(100) ;
					cout<<"\n\t Enter choice : " ;
					ch=getch() ;
					textmode(C80) ;
					switch(ch)
					{
						case '1':
							clrscr() ;
							char *pass ;
							pass = getpass (" Enter password :") ;
							if(strcmpi(pass,"deepak") == 0)
							{
								f1.open("she",ios::out|ios::binary) ;
								cout<<endl<<" Enter no. of records : " ;
								cin>>n ;
								for(i=1;i<=n;i++)
								{
									cout<<endl<<" CD#"<<i+1<<endl ;
									ob.getdata(i) ;
									f1.write((char*)&ob,sizeof(ob)) ;
								}
								f1.close() ;
							}
							else
							{
								cout<<endl<<" Wrong password " ;
								getch() ;
							}
							break ;
						case '2':
							clrscr() ;
							f1.open("she",ios::in|ios::binary) ;
							f1.read((char*)&ob,sizeof(ob)) ;
							while(!f1.eof())
							{
								ob.display() ;
								cout<<endl<<endl<<endl ;
								getch() ;
								f1.read((char*)&ob,sizeof(ob)) ;
							}
							f1.close() ;
							break ;
						case '3':
							clrscr() ;
							f1.open("she",ios::in|ios::binary) ;
							f1.seekg(0,ios::beg);
							f1.seekg(0,ios::end) ;
							cht=f1.tellg() ;
							n=cht/sizeof(ob) ;
							f1.seekg((n-1),ios::beg) ;
							cht=ob.code ;
							f1.close() ;
							f1.open("she",ios::app|ios::binary) ;
							cout<<" No. of records you want to add : " ;
							cin>>ap ;
							for(i=1;i<=ap;i++)
							{
								cout<<endl<<endl<<" Movie#"<<n+i<<endl ;
								ob.getdata(cht+i) ;
								f1.write((char*)&ob,sizeof(ob)) ;
							}
							f1.close() ;
							break ;
						case '4':
							c='7' ;
							while( c!='0' )
							{
								clrscr() ;
								textmode(C40) ;
								cout<<"\n\n\n\n\t\t SEARCH MENU"<<endl ;
								cout<<"\t\t------------- "<<endl<<endl ;
								delay(100) ;
								cout<<"\t 1: SEARCH BY MOVIE NAME  "<<endl ;
								delay(100) ;
								cout<<"\t 2: SEARCH BY DIRECTOR NAME "<<endl ;
								delay(100) ;
								cout<<"\t 3: SEARCH BY MALE LEAD "<<endl ;
								delay(100) ;
								cout<<"\t 4: SEARCH BY FEMALE LEAD "<<endl ;
								delay(100) ;
								cout<<"\t 5: SEARCH BY CODE "<<endl ;
								delay(100) ;
								cout<<"\t 0: EXIT "<<endl<<endl ;
								cout<<"\n\t Enter choice : " ;
								c=getch() ;
								textmode(C80) ;
								switch(c)
								{
									case '1':
										h=0 ;
										clrscr() ;
										cout<<" Enter Movie Name : " ;
										gets(na) ;
										f1.open("she",ios::in|ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										while(!f1.eof())
										{
											m=ob.matchm(na) ;
											if(m==0)
											{
												cout<<endl<<endl ;
												ob.display() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&ob,sizeof(ob)) ;
										}
										if(h==0)
										{
											cout<<" No match "<<endl ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '2':
										h=0 ;
										clrscr() ;
										cout<<" Enter Director Name : " ;
										gets(na) ;
										f1.open("she",ios::in|ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										while(!f1.eof())
										{
											k=ob.matchd(na) ;
											if(k==0)
											{
												cout<<endl<<endl ;
												ob.display() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&ob,sizeof(ob)) ;
										}
										if(h==0)
										{
											cout<<" No match " ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '3':
										h=0 ;
										clrscr() ;
										cout<<" Enter Male Lead : " ;
										gets(na) ;
										f1.open("she",ios::in|ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										while(!f1.eof())
										{
											k=ob.matchml(na) ;
											if(k==0)
											{
												cout<<endl<<endl ;
												ob.display() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&ob,sizeof(ob)) ;
										}
										if(h==0)
										{
											cout<<" No match " ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '4':
										h=0 ;
										clrscr() ;
										cout<<" Enter Female Lead : " ;
										gets(na) ;
										f1.open("she",ios::in|ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										while(!f1.eof())
										{
											k=ob.matchfl(na) ;
											if(k==0)
											{
												cout<<endl<<endl ;
												ob.display() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&ob,sizeof(ob)) ;
										}
											if(h==0)
										{
											cout<<" No match " ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '5':
										h=0 ;
										clrscr() ;
										cout<<" Enter Code : " ;
										cin>>n ;
										f1.open("she",ios::in|ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										while(!f1.eof())
										{
											m=ob.matchcd(n) ;
											if(m==0)
											{
												cout<<endl<<endl ;
												ob.display() ;
												getch() ;
												h=1 ;
											}
											f1.read((char*)&ob,sizeof(ob)) ;
										}
										if(h==0)
										{
											cout<<" No Match "<<endl ;
											getch() ;
										}
										f1.close() ;
										break ;
									case '0':
										break ;
									default :
										cout<<endl<<"	Enter correct choice " ;
										getch() ;
								}
							}
							break;
						case '5':
							a='7' ;
							while(a!='0')
							{
								clrscr() ;
								textmode(C40) ;
								cout<<"\n\n\n\n\t\t EDIT MENU "<<endl ;
								cout<<"\t\t----------- "<<endl<<endl ;
								delay(100) ;
								cout<<"\t     1: DELETE DATA "<<endl ;
								delay(100) ;
								cout<<"\t     2: MODIFY DATA "<<endl ;
								delay(100) ;
								cout<<"\t     0: Exit "<<endl<<endl ;
								cout<<"\n\t Enter Choice : " ;
								a=getch() ;
								textmode(C80) ;
								switch(a)
								{
									case '1':
										int match=0 ;
										clrscr() ;
										h=0 ;
										cout<<endl<<" Enter Movie Name : ";
										gets(na);
										f1.open("she",ios::in|ios::binary) ;
										f2.open("new",ios::out,ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										while(!f1.eof())
										{
											k=ob.matchm(na) ;
											if(k==0)
											{
												cout <<endl<<" This record will be deleted" ;
												cout<<endl<<endl ;
												ob.display() ;
												match = 1 ;
												h = 1 ;
												getch() ;
											}
											if ( match == 0 )
											{
												f2.write((char*)&ob,sizeof(ob)) ;
											}
											match =0 ;
											f1.read((char*)&ob,sizeof(ob)) ;
										}
										if(h==0)
										{
											cout<<" No match " ;
											getch() ;
										}
										f1.close() ;
										f2.close() ;
										f1.open("new",ios::in|ios::binary) ;
										f2.open("she",ios::out|ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										while(!f1.eof())
										{
											f2.write((char*)&ob,sizeof(ob)) ;
											f1.read((char*)&ob,sizeof(ob)) ;
										}
										f1.close() ;
										f2.close() ;
										break;
									case '2':
										clrscr() ;
										h=0;
										cout<<endl<<" Enter Movie Name : " ;
										gets(na) ;
										fflush(stdin) ;
										f1.open("she",ios::in|ios::binary) ;
										f1.read((char*)&ob,sizeof(ob)) ;
										i=1 ;
										while(!f1.eof())
										{
											k=ob.matchm(na) ;
											if(k==0)
											{
												cout<<" This record will be modified " ;
												cout<<endl<<endl ;
												ap=ob.code ;
												ob.display() ;
												getch() ;
												h=1 ;
												m=i ;
												break;
											}
											i++ ;
											f1.read((char*)&ob,sizeof(ob)) ;
										}
										if(h==0)
										{
											cout<<" No match "<<endl ;
											getch() ;
										}
										f1.close() ;
										f1.open("she",ios::binary|ios::in|ios::out) ;
										cout<<endl<<" Enter new record "<<endl ;
										ob.getdata(ap) ;
										f1.seekg((m-1)*sizeof(ob),ios::beg) ;
										f1.write((char*)&ob,sizeof(ob)) ;
										f1.close() ;
										break ;
									case '0':
										break ;
									default :
										cout<<" Enter Correct Choice  " ;
										getch() ;
								}
							}
							break ;
						case '0' :
							break ;
						default:
							cout<<endl<<" Enter Correct Choice" ;
							getch() ;
					}
				}
				break ;
			case '3':  co = '6';
				while(co!='0')
				{
					clrscr() ;
					textmode(C40) ;
					cout<<"\n\n\n\n\t ISSUE AND RETURN MENU "<<endl ;
					cout<<"\t----------------------- "<<endl<<endl ;
					delay(100) ;
					cout<<"\t    1: ISSUE "<<endl ;
					delay(100) ;
					cout<<"\t    2: RETURN "<<endl ;
					delay(100) ;
					cout<<"\t    0: EXIT "<<endl ;
					delay(100) ;
					cout<<"\n\t Enter Choice : " ;
					co=getch() ;
					textmode(C80) ;
					switch(co)
					{
						case '1':
							clrscr() ;
							cout<<" Enter Member Code : " ;
							cin>>n ;
							cout<<" Enter Code Of CD You Want To Issue : " ;
							cin>>h ;
							i=0 ;               // record no
							ap=0 ;            // record no
							f1.open("she",ios::in|ios::binary) ;// cds
							f2.open("he",ios::in|ios::binary) ;  // members
							f2.read((char*)&mb,sizeof(mb)) ;
							while(!f2.eof())
							{
								k=mb.matchc(n) ;
								if ( k == 0 )
								{
									if(mb.cdcode != 0)
									{
										cout<<" Already Issued " ;
										i=0 ;
									}
									break;
								}
								f2.read((char*)&mb,sizeof(mb)) ;
								i++ ;
							}
							f1.read((char*)&ob,sizeof(ob)) ;
							while(!f1.eof())
							{
								m=ob.matchcd(h) ;
								if(m==0)
								{
									if ( ob.status == 'N' )
									{
										cout << " Already Issued ";
										ap=0 ;
									}
									break;
								}
								f1.read((char*)&ob,sizeof(ob)) ;
								ap++ ;
							}
							f1.close() ;
							f2.close() ;
							f1.open("she",ios::in|ios::out|ios::binary) ;
							f2.open("he",ios::in|ios::out|ios::binary) ;
							if(k==0 && m==0 && ap!=0 && i!=0)
							{
								f2.seekg((i)*sizeof(mb),ios::beg) ;
								f2.read((char*)&mb,sizeof(mb)) ;
								f1.seekg((ap)*sizeof(ob),ios::beg) ;
								f1.read((char*)&ob,sizeof(ob)) ;
								mb.cdcode=ob.code ;
								ob.status='N' ;
								f2.seekg((i)*sizeof(mb),ios::beg) ;
								f2.write((char*)&mb,sizeof(mb)) ;
								f1.seekg((ap)*sizeof(ob),ios::beg) ;
								f1.write((char*)&ob,sizeof(ob)) ;
								cout<<endl<<" Cd Issued " ;
							}
							else
								cout <<endl<<" Details Do Not Match Properly ";
							getch();
							f1.close() ;
							f2.close() ;
							break ;

						case '2':
							clrscr() ;
							cout<<" Enter Member Code : " ;
							cin>>n ;
							i=0 ;               // record no member
							ap=0 ;	 // record no cd
							h = 4;
							f1.open("she",ios::in|ios::binary) ;// cds
							f2.open("he",ios::in|ios::binary) ;  // members
							f2.read((char*)&mb,sizeof(mb)) ;
							while(!f2.eof())
							{   k=mb.matchc(n) ;
								if ( k == 0 )
								{
									cout <<endl<<" Cd no issued is " <<mb.cdcode<<endl ;
									f1.read((char*)&ob,sizeof(ob)) ;
									while(!f1.eof())
									{
										m=ob.matchcd(mb.cdcode) ;
										if(m==0)
										{	cout << " matche cd";
											if ( ob.status == 'A' )
											{	cout << " No Cd Issued ";
												h=0 ;
											}
											else
												h=ap ;
											break;
										}
										f1.read((char*)&ob,sizeof(ob)) ;
										ap++ ;
									}
									break;
								}
								if (  h == 0 )
									break;
								f2.read((char*)&mb,sizeof(mb)) ;
								i++ ;
							}
							f1.close() ;
							f2.close() ;
							if(k==0 && m==0 && h != 0)
							{
								f1.open("she",ios::in|ios::out|ios::binary) ;
								f2.open("he",ios::in|ios::out|ios::binary) ;
								f2.seekg((i)*sizeof(mb),ios::beg) ;
								f2.read((char*)&mb,sizeof(mb)) ;
								f1.seekg((h)*sizeof(ob),ios::beg) ;
								f1.read((char*)&ob,sizeof(ob)) ;
								mb.cdcode=0 ;
								ob.status='A' ;
								f2.seekg((i)*sizeof(mb),ios::beg) ;
								f2.write((char*)&mb,sizeof(mb)) ;
								f1.seekg((h)*sizeof(ob),ios::beg) ;
								f1.write((char*)&ob,sizeof(ob)) ;
								cout<<endl<<" Cd Returned " ;
								f1.close() ;
								f2.close() ;
							}
							else
								cout << " Details Do Not Match Properly " ;
							getch() ;
							break ;
						case '0':
							break ;
						default :
							cout<<endl<<" Enter Correct Choice "<<endl ;
							getch() ;
					}
				}
				break;
			case '0':
				exit(0) ;
			default :
				cout<<endl<<" Enter Correct Choice " ;
				getch() ;
		}

	}
}