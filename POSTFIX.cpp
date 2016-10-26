#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
const int size=50;
char infix[size],postfix[size],stack[size];
int top=-1;
int precedence(char ch)
{
	switch(ch)
	{
		case'^':return 5;
		case'/':return 4;
		case'*':return 4;
		case '+':return 3;
		case'-':return 3;
		default:return 0;
	}
}
char pop()
{
	char ret;
	if(top!=-1)
	{
		ret=stack[top];
		top--;
		return ret;
	}
	else
	return'#';
}
char topelement()
{
	char ch;
	if(top!=-1)
	ch=stack[top];
	else ch='#';
	return ch;
}
void push(char ch)
{
	if(top!=size-1)
	{
		top++;
		stack[top]=ch;
	}
}
int braces(char *s)
{
	int leftbr,rightbr;
	leftbr=rightbr=0;
	for(int i=0;s[i];i++)
	{
		if(s[i]=='(') leftbr++;
		if(s[i]==')')rightbr++;
	}
	if(leftbr==rightbr)return 0;
	else if(leftbr<rightbr)return 1;
	else return -1;
}
void main()
{
	clrscr();
	char ele,elem,st[2];
	int prep,pre,popped,j=0,chk=0,l=0;
	strcpy(postfix," ");
	system("cls");
	cout<<"ASSUMPTION:The infix expression contains single letter variables"<<endl;
	cout<<"and single digit constants only"<<endl<<endl;
	cout<<"Enter Infix Expression"<<endl;
	gets(infix);
       l=strlen(infix);
	cout<<endl;
	chk=braces(infix);
	if(chk!=0)
	{
		cout<<"Unbalanced no. of braces \n Extra";
		cout<<(chk==1?"rightbraces":"leftbraces")<<endl;
		exit(1);
	}
	for(int i=0;i<l;i++)
	{
		if(infix[i]!='('&&infix[i]!='^'&&infix[i]!='*'&&infix[i]!='/'&&infix[i]!='+'&&infix[i]!='-'&&infix[i]!=')')
		{
			postfix[j++]=infix[i];
		}
		else if(infix[i]=='(')
		{
			elem=infix[i];
			push(elem);
		}
		else if(infix[i]==')')
		{
			while((popped==pop())!='(')
			{
				postfix[j++]=popped;
			}
		}
		else
		{
			elem=infix[i];
			pre=precedence(elem);
			ele=topelement();
			prep=precedence(ele);
			if(pre>prep)
		       {	push(elem);   }
			else
			{
				while(prep>=pre)
				{
					if(ele=='#')
				       {
						break;
				       }
				       popped=pop();
				       ele=topelement();
				       postfix[j++]=popped;
				       prep=precedence(ele);
				}
				push(elem);
			}
		}
	}
	while((popped=pop())!='#')
       {	postfix[j++]=popped;  }
	postfix[j]='\0';
	cout<<endl<<"Post Fix:"<<postfix<<endl;
	getch();
}

