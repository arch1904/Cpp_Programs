#include <iostream>
#include<stdlib.h>
#include<string>

using namespace std;
 string random_sentence_generator(int n)
{
  switch(n)
  {
    case 1: return("I Like This Stuff");
    case 2: return("Java or C++?");
    case 3: return("Is This The Real Life, Is This Just Fantasy?");
    case 4: return("Python is easier");
    case 5: return("JavaScript is the worst!");
    case 6: return("I don't even know why people use Pascal any more");
    case 7: return("MATLAB isn't a real programming language");
    case 8: return("Seriously, who uses assembly any more");
    case 9: return("CS 125 is amazing");
    case 10: return("Et Tu Brute?");
    default: return("Smart Ass eh? I asked for a number between 1 and 10 -_-");
  }
}
int main()
{
   cout << "Hey,";
   char mesg[] = "this isn't my first C++ program lmao";
   cout << mesg <<"!"<< endl;
   int n;
   cout<<"Enter a number between 1 and 10"<<endl;
   cin>>n;
   cout<<random_sentence_generator(n)<<endl;
   int i=0;
   do{
     cout << i*(++i)<<endl;
   }while(i<20);
   return 0;
}
