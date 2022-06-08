/*
4.Write a C++ program that requests numbers consecutively from the user within a range. The
program should stop when the number is out of range, using while loop.
*/
#include <iostream>
using namespace std;
int main()
{
 float a,b,num;
 cout<<"Enter your Range [a,b]: ";
 cin>>a>>b;
 cout<<endl;

 cout<<"the range is: ["<<a<<","<<b<<"]"<<endl;
 cout<<"Input a number"<<endl;
 cin>>num;

 while(num>=a && num<=b)
     {
         cout<<"Input a number"<<endl;
         cin>>num;
     }
     cout<<"The number out of range"<<endl;
 return 0;
}
