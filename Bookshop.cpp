//
//  Bookshop.cpp
//  
//
//  Created by Archit Gupta on 8/10/15.
//
//

#include <stdio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<process.h>
#include<ctype.h>
usingnamespacestd:

class subject
{
public:
    char s[5][40],sub[5][5][40];
    subject()
    {
        //Physics Books
        strcpy(sub[0][0],"Physics NCERT-I");
        strcpy(sub[0][1],"Physics NCERT-II");
        strcpy(sub[0][2],"Pradeep Physics");
        strcpy(sub[0][3],"H.C.Verma\t");
        strcpy(sub[0][4],"Together With Phycics");
        //Chemistry Books
        strcpy(sub[1][0],"Chemistry NCERT-I");
        strcpy(sub[1][1],"Chemistry NCERT-II");
        strcpy(sub[1][2],"Pradeep Chemistry");
        strcpy(sub[1][3],"Together With Chemistry");
        //Mathematics Books
        strcpy(sub[2][0],"Mathematics NCERT-I");
        strcpy(sub[2][1],"Mathematics NCERT-II");
        strcpy(sub[2][2],"Maths R.D.Sharma");
        strcpy(sub[2][3],"Together With Mathematics\t");
        //English Books
        strcpy(sub[3][0],"Flemingo Textbook");
        strcpy(sub[3][1],"Vistas Textbook");
        strcpy(sub[3][2],"The Invisible Man");
        strcpy(sub[3][3],"Enlish BBC");
        strcpy(sub[3][4],"Together With English\t");
        //Computer Science Books
        strcpy(sub[4][0],"Sumita Arora C++");
        strcpy(sub[4][1],"Together With C++");
        strcpy(sub[4][2],"Evergreen C++");
        strcpy(sub[4][3],"Arihant\t");
        //Subjects
        strcpy(s[0],"Physics\t");
        strcpy(s[1],"Chemistry\t");
        strcpy(s[2],"Maths\t");
        strcpy(s[3],"English\t");
        strcpy(s[4],"Computer Science");
        
    }
};
void show();
void show2();
class userlist
{
public:
    int no;
    char users[100][50];
};
class user
{
public:
    int sbj[5][7],totp,totr;
    char password[20];
    void showpb()
    {
        cout<<endl<<endl<<" 'P' Purchase" <<endl<<" 'B' Back";
    }
};
void uppercase(char *);
void pur_ret(char name[]);
void notification(user &);
void setdefault(user &);
void chkusrlst();
void chkbooklst();
void showuserlist();
int crtusr();
int showbooks();
int openacc();
void namecutter(char name[]);
int main()
{
    textbackground(3);
    textcolor(0);
    chkusrlst();
    chkbooklst();
mpage:
    
    char ch;
    cout<<endl<<endl<<"\t\t\t Welcome To The BOOKSHOP"<<endl<<endl
    <<" Press '1' to See the lists of books" <<endl
    <<" Press '2' to Create an account" <<endl
    <<" Press '3' to Open an account"<<endl
    <<" Press '4' to See about no. of books purchased/returned"<<endl
    <<" Press '5' to See the list of accounts"<<endl
    <<" Press '6' to Quit";
    show();
    ch=
    switch(ch)
    {
        case '1': if(showbooks()==1)
        {
            goto mpage;
        }
            break;
        case '2': crtusr();
            goto mpage;
        case '3': openacc();
            goto mpage;
        case '4': pur_ret("BOOKLIST");
            goto mpage;
        case '5': showuserlist();
            goto mpage;
        case '6' : return 0;
        default : goto mpage;
    }
    
    return 0;
}
int crtusr()
{
    
    char name[50],reply;
    ifstream fi;
    user u;userlist list;
    fi.open("USERLIST");fi.read((char *) &list,sizeof(list));fi.close();
    if(list.no==99)
    {
        cout<<"\n\tYou can't create any account.\n\t";
        cout<<"Since the accout list is full,\n\tso you have to";
        cout<<" delete an account";show2();  return 0;
    }
    cout<<"\n Enter your name(max 49 characters):\n ";
page2:
    cin.getline(name,49);uppercase(name);
    if(name[0]=='\0'||name[0]==' ')
    {
        
        cout<<"\n Please enter a valid name:";goto page2;
    }
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]=='\\'||name[i]=='/'||name[i]==':'||name[i]=='*'||name[i]=='?'||name[i]=='\"'||name[i]=='<'||name[i]=='>'||name[i]=='|')
        {
            
            cout<<"\n Please enter a valid name:";goto page2;
        }
    }
    fi.open(name);
    if(fi.good())
    {
        
        cout<<"\n The name you have entered is already present!";
        cout<<"\n Please enter another:\n ";goto page2;
    }
    fi.close();
page:
    cout<<"\n Do you want to add a password? (y/n):";reply=
    if(reply=='Y'||reply=='y')
    {
        
        cout<<"\n Enter your password(max 19 characters):\n ";
        cin.getline(u.password,19);
    }
    else if(reply=='N'||reply=='n')
    {
        strcpy(u.password,"########");
    }
    else
    {
        goto page;
    }
    setdefault(u);
    ofstream fo(name);
    fo.write((char *) &u,sizeof(u));fo.close();
    strcpy(list.users[list.no],name);list.no++;
    fo.open("USERLIST");fo.write((char *) &list,sizeof(list));fo.close();
    cout<<"\n\n\tCongratulations! ";
    cout<<"You have created your account of name:\n\t'"<<name<<"'";
    show2();
    
    return 0;
}

void setdefault(user &usr)
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            usr.sbj[i][j]=0;
        }
    }
    usr.totp=0;usr.totr=0;
}

void chkusrlst()
{
    ifstream usrlst;
    usrlst.open("userlist");
    if(!usrlst.good())
    {
        ofstream fo("userlist");
        userlist list;
        list.no=0;
        fo.write((char *) &list,sizeof(list));
        fo.close();
    }
    usrlst.close();
}

void chkbooklst()
{
    ifstream booklst;int i,j;
    booklst.open("booklist");
    if(!booklst.good())
    {
        ofstream fo("booklist");
        user bklst;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                bklst.sbj[i][j]=1000;
            }
        }
        for(i=0;i<5;i++)
        {
            bklst.sbj[i][5]=0;bklst.sbj[i][6]=0;
        }
        bklst.totp=0;bklst.totr=0;
        fo.write((char *)&bklst,sizeof(bklst));
        fo.close();
    }
    booklst.close();
}
int showbooks()
{
    user guest;subject sb;char i,k,ch,ch1,ch2;int x,y,j;
page1:
    ifstream fi("Booklist");
    fi.read((char *) &guest,sizeof(guest));
    fi.close();
    cout<<endl<<endl<<endl<<endl;
    for(x=0;x<5;x++)
    {
        cout<<" '"<<x+1<<"' "<<sb.s[x]<<endl;
    }
    cout<<" 'B' Back";
    show();
    ch=
    for(i='1',x=0;i<='5';i++,x++)
    {
    page2:
        if(ch==i)
        {
            cout<<"\n\n\n\t\t"<<sb.s[x]<<"\n\n\n\n";
            for(j=0;j<5;j++)
            {
                cout<<" \'"<<j+1<<"\' "<<sb.sub[x][j]<<"\t";
                cout<<guest.sbj[x][j]<<" remaining\n";
            }
            cout<<" 'B' Back";show();ch1=
            for(k='1',y=0;k<='5';k++,y++)
            {
                if(ch1==k)
                {
                page3:
                    cout<<"\n\t\t\t\t"<<sb.sub[x][y];
                    guest.showpb();show();ch2=
                    if(ch2=='P'||ch2=='p')
                    {
                        if(guest.sbj[x][y]>0)
                        {
                            guest.totp++;guest.sbj[x][5]++;guest.sbj[x][y]--;
                            notification(guest);
                        }
                        else
                        {
                            
                            cout<<"\n\n\tYou can't purchase this book.\n\tMake ";
                            cout<<"sure that no. of copies of this book\n\tin ";
                            cout<<"this shop is greater than zero.";
                            show2();
                            
                            goto page2;
                        }
                    }
                    else if(ch2=='B'||ch2=='b')
                    {
                        goto page2;
                    }
                    else
                    {
                        goto page3;
                    }
                    break;
                }
            }
            if(ch1=='B'||ch1=='b')
            {
                goto page1;
            }
            else
            {
                goto page2;
            }
        }
    }
    if(ch=='B'||ch=='b')
    {
        return 1;
    }
    else
    {
        goto page1;
    }
}

void notification(user &u)
{
    
    ofstream f("BOOKLIST");
    f.write((char *) &u,sizeof(u));
    f.close();
    cout<<"\n\n\n\n\n\n\n\tThank you for your purchasing this book. ";
    cout<<"Next time you must create\n\tan account so that you can ";
    cout<<"purchase more than one book and also can\n\treturn books";
    cout<<" purchased from this shop.\n\n\n\n\n";
    cout<<"\tNow press any key to exit";
    
    exit(0);
}

void show()
{
    cout<<"\n\n\n\n\n\tPress any of the keys given above!";
}

void show2()
{
    cout<<"\n\n\n\n\n\tPress any key to back!";
}

void pur_ret(char name[])
{
    
    user u;
    subject s;
    ifstream fi(name);
    int i;
    fi.read((char *) &u,sizeof(u));fi.close();
    cout<<"\n\n\n\n Subject\t\tPurchased\tReturned\n\n\n";
    for(i=0;i<5;i++)
    {
        cout<<" "<<i+1<<"."<<" "<<s.s[i]<<"\t"<<u.sbj[i][5];
        cout<<"\t\t"<<u.sbj[i][6]<<"\n";
    }
    cout<<" 6. "<<"Total\t\t"<<u.totp<<"\t\t"<<u.totr;
    show2();
    
}

int openacc()
{
    user u,bklst;
    userlist list;
    char name[50],passw[20],reply;
    ofstream fo;
page1:
    cout<<"\n Enter your account name:\n ";
    cin.getline(name,49);
    uppercase(name);
    ifstream fi(name);
    if(!fi.good())
    {
    pagename:
        
        cout<<"\n\n Wrong account name!\n Enter again?(y/n)\n ";
        reply=
        if(reply=='y'||reply=='Y')
        {
            goto page1;
        }
        else if(reply=='n'||reply=='N')
        {
            return 0;
        }
        else
        {
            goto pagename;
        }
    }
    fi.read((char *) &u,sizeof(u));fi.close();
    fi.open("USERLIST");fi.read((char *) &list,sizeof(list));fi.close();
    int flag=0;
    for(int s=0;s<list.no;s++)
    {
        if(!strcmp(name,list.users[s]))
        {
            flag=1;break;
        }
    }
    if(flag==0)
    {
        strcpy(list.users[list.no],name);
        list.no++;
        fo.open("USERLIST");
        fo.write((char *) &list,sizeof(list));fo.close();
    }
    if(!strcmp(u.password,"########"))
    {
        goto page3;
    }
page2:
    cout<<"\n Enter your password:\n ";
    cin.getline(passw,19);
    if(strcmp(u.password,passw))
    {
    pagepass:
        
        cout<<"\n\n Wrong password!\n Enter again?(y/n)\n ";
        reply=
        if(reply=='y'||reply=='Y')
        {
            goto page2;
        }
        else if(reply=='n'||reply=='N')
        {
            return 0;
        }
        else
        {
            goto pagepass;
        }
    }
page3:
    fi.open("BOOKLIST");
    fi.read((char *) &bklst,sizeof(bklst));
    fi.close();
    cout<<"\n\n\n\tWelcome "<<name;
    cout<<"\n\n\n\n '1' Purchase/return books\n '2' No. of books";
    cout<<" you are having\n '3' No. of books purchased/retutned ";
    cout<<"by you\n '4' Add/modify password\n '5' Remove password\n ";
    cout<<"'6' Delete your account\n 'B' Back";
    show();
    reply=
    if(reply=='1')
    {
        subject sb;char i,k,ch,ch1,ch2;int x,y,j;
    page31:
        cout<<endl<<endl<<endl;
        for(x=0;x<5;x++)
        {
            cout<<" '"<<x+1<<"' "<<sb.s[x]<<"\n";
        }
        cout<<" 'B' Back";
        show();
        ch=
        for(i='1',x=0;i<='5';i++,x++)
        {
        page32:
            if(ch==i)
            {
                cout<<"\n\n\n\t\t"<<sb.s[x]<<"\n\n\n\n";
                for(j=0;j<5;j++)
                {
                    cout<<" \'"<<j+1<<"\' "<<sb.sub[x][j]<<"\t";
                    cout<<bklst.sbj[x][j]<<" remaining\n";
                }
                cout<<" 'B' Back";show();ch1=
                for(k='1',y=0;k<='5';k++,y++)
                {
                    if(ch1==k)
                    {
                    page33:
                        cout<<"\n\t\t\t\t"<<sb.sub[x][y];
                        u.showpb();cout<<"\n 'R' Return";show();ch2=
                        if(ch2=='P'||ch2=='p')
                        {
                            if(bklst.sbj[x][y]>0)
                            {
                                u.totp++;bklst.totp++;u.sbj[x][5]++;bklst.sbj[x][5]++;
                                u.sbj[x][y]++;bklst.sbj[x][y]--;fo.open("BOOKLIST");
                                fo.write((char *) &bklst,sizeof(bklst));fo.close();
                                fo.open(name);fo.write((char *) &u,sizeof(u));fo.close();
                                
                                cout<<"\n\n\tOK! You have purchased this book";
                            }
                            else
                            {
                                
                                cout<<"\n\n\tYou can't purchase this book.\n\tMake ";
                                cout<<"sure that no. of copies of this book\n\tin ";
                                cout<<"this shop is greater than zero.";
                            }
                            show2();
                            
                            goto page32;
                        }
                        else if(ch2=='r'||ch2=='R')
                        {
                            if(u.sbj[x][y]>0)
                            {
                                u.totr++;bklst.totr++;u.sbj[x][6]++;bklst.sbj[x][6]++;
                                u.sbj[x][y]--;bklst.sbj[x][y]++;fo.open("BOOKLIST");
                                fo.write((char *) &bklst,sizeof(bklst));fo.close();
                                fo.open(name);fo.write((char *) &u,sizeof(u));fo.close();
                                
                                cout<<"\n\n\tOK! You have returned this book";
                            }
                            else
                            {
                                
                                cout<<"\n\n\tYou can't return this book.\n\tMake ";
                                cout<<"sure that no. of copies of this book\n\tyou";
                                cout<<" are having is greater than zero.";
                            }
                            show2();
                            
                            goto page32;
                        }
                        else if(ch2=='B'||ch2=='b')
                        {
                            goto page32;
                        }
                        else
                        {
                            goto page33;
                        }
                    }
                }
                if(ch1=='B'||ch1=='b')
                {
                    goto page31;
                }
                else
                {
                    goto page32;
                }
            }
        }
        if(ch=='B'||ch=='b')
        {
            goto page3;
        }
        else
        {
            goto page31;
        }
    }
    else if(reply=='2')
    {
        
        int i,j;
        for(i=0;i<5;i++)
        {
            subject sb;
            cout<<"\n "<<sb.s[i]<<"\n";
            for(j=0;j<5;j++)
            {
                cout<<"  "<<j+1<<". "<<sb.sub[i][j]<<"\t"<<u.sbj[i][j];
                cout<<" remaining\n";
            }
        }
        show2();
        
        goto page3;
    }
    else if(reply=='3')
    {
        pur_ret(name);
        goto page3;
    }
    else if(reply=='4')
    {
        
        cout<<"\n Enter new password(max 19 characters):\n ";
        cin.getline(passw,19);
        strcpy(u.password,passw);
        
        cout<<"\n\tPassword modified succesfully!";
        show2();
        
        fo.open(name);
        fo.write((char *) &u,sizeof(u));fo.close();
        goto page3;
    }
    else if(reply=='5')
    {
    page35:    
        cout<<"\n Remove password?(y/n):";
        reply=  
        if(reply=='Y'||reply=='y')
        {
            strcpy(u.password,"########");
            fo.open(name);
            fo.write((char *) &u,sizeof(u));
            fo.close();
            
            cout<<"\n\tPassword removed successfully!";
            show2();
            
            goto page3;
        }
        else if(reply=='N'||reply=='n')
        {
            goto page3;
        }
        else
        {
            goto page35;
        }
    }
    else if(reply=='6')
    {
    page36:    
        cout<<"\n Do you want to delete your account?(y/n):";
        reply=  
        if(reply=='Y'||reply=='y')
        {
            
            remove(name);
            cout<<"\n\tYour account is deleted successfully!";
            show2();
            
            namecutter(name);
            return 0;
        }
        else if(reply=='N'||reply=='n')
        {
            goto page3;
        }
        else
        {
            goto page36;
        }
    }
    else if(reply=='b'||reply=='B')
    {
    page3b:    
        cout<<"\n Do you want to exit from your account?(y/n):";
        reply=  
        if(reply=='Y'||reply=='y')
        {
            return 0;
        }
        else if(reply=='N'||reply=='n')
        {
            goto page3;
        }
        else
        {
            goto page3b;
        }
    }
    else
    {
        goto page3;
    }
}

void uppercase(char *a)
{
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=toupper(a[i]);
    }
}

void showuserlist()
{
    
    int i;userlist list;ifstream fi("USERLIST");
    fi.read((char *) &list,sizeof(list));
    fi.close();
    for(i=0;i<list.no;i++)
    {
        cout<<"\n "<<i+1<<". "<<list.users[i];
    }
    show2();
    
}

void namecutter(char name[])
{
    userlist u;char temp[50];int i;
    ifstream fi("USERLIST");fi.read((char *) &u,sizeof(u));fi.close();
    for(i=0;i<u.no-1;i++)
    {
        if(strcmp(u.users[i],name)==0)
        {
            strcpy(temp,u.users[i]);
            strcpy(u.users[i],u.users[i+1]);
            strcpy(u.users[i+1],temp);
        }
    }
    u.no--;ofstream fo("USERLIST");
    fo.write((char *) &u,sizeof(u));
    fo.close();
}
