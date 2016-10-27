#include<iostream>
using namespace std;

struct Student
{
	int rno;
	char name[50];
	float marksPHY,marksCS,marksMATH,marksCHEM,marksENG;
	float total;
	float percentage;
	char grade;
};

int main()
{
	system("clear");
	int n;
	n=2; //No. Of Students Let N=2
	Student s[2];
	int i;
	for(i=0;i<n;i++) 	// Input of Roll No, Name and Marks in each Subject
	{
		cout<<endl<<"Enter Your Roll No: "<<endl;
		cin>>s[i].rno;
		cout<<endl<<"Enter Your Name: "<<endl;
		cin>>s[i].name;
		cout<<endl<<"Enter Your Marks in Physics: "<<endl;
		cin>>s[i].marksPHY;
		cout<<endl<<"Enter Your Marks in Computer Science: "<<endl;
		cin>>s[i].marksCS;
		cout<<endl<<"Enter Your Marks in Mathematics: "<<endl;
		cin>>s[i].marksMATH;
		cout<<endl<<"Enter Your Marks in Chemistry: "<<endl;
		cin>>s[i].marksCHEM;
		cout<<endl<<"Enter Your Marks in English: "<<endl;
		cin>>s[i].marksENG;
	}
	for( i=0;i<n;i++)		// Loop for Calculation of Percentage
	{
		for(int j=1;j<=5;j++) 	// Loop for Calculation of Total
		{
			s[i].total=s[i].marksPHY+s[i].marksCS+s[i].marksMATH+s[i].marksCHEM+s[i].marksENG;
		}
		s[i].percentage=(s[i].total/500)*100;
	}
	//Calculation of Grade
	if(s[i].total>=450)
	{
		s[i].grade='A';
	}
	else if(s[i].total>=350 && s[i].total>300)
	{
		s[i].grade='B';
	}
	else if(s[i].total>=300 && s[i].total>200)
	{
		s[i].grade='C';
	}
	else if(s[i].total>=200 && s[i].total>100)
	{
		s[i].grade='D';
	}
	else
	{
		s[i].grade='E';
	}
	for(int m=0;m<n;m++)	//Output of Results
	{
		cout<<endl<<"Details of "<<(m+1)<<"Student: "<<endl;
		cout<<endl<<s[m].rno<<"\t"<<s[m].name<<"\t"<<s[m].marksPHY<<"\t"<<s[m].marksCS<<"\t"<<s[m].marksMATH<<"\t"<<s[m].marksCHEM<<"\t"<<s[m].marksENG<<"\t"<<s[m].total<<"\t"<<s[m].percentage<<"\t"<<s[m].grade<<"\t"<<endl;
	}
}






