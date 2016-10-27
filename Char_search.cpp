#include<iostream.h>
#include<conio.h>
int search(char a,char arr[])
{
	int b,mid,end=4,top=0,k,i=-1;
	b=a;
	do
	{
	   mid=(top+end)/2;
	   k=arr[mid];
	   if(b>k)
	   {
		top=mid+1;
	   }
	   if(b<k)
	   {
		end=mid;
	   }
	   if(b==k)
	   {
		cout<<"ELEMENT FOUND"<<endl;
		i=mid;
		top=end;
	   }
	}while(top!=end);
	return i;
}
void main()
{
	clrscr();
	char arr[5]={'a','b','c','d','e'};
	char c;
	int i;
	cout<<endl<<"Enter Character To Be Searched"<<endl;
	cin>>c;
	i=search(c,arr);
	if(i==-1)
	{
		cout<<endl<<"Element Does Not Exist"<<endl;
	}
	else
	{
		cout<<"Element is at "<<i<<" Index or "<<i+1<<" Position"<<endl;
	}
	getch();
}