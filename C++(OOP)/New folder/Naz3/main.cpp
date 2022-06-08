/*
3. Write a C++ program that reads the names of 10 students with their marks using two vectors
whose names are Names and Marks respectively, then find and print number of passed and failed
students with a list of names for each of passed students and failed students.
*/
#include <iostream>
#include <cstring>
using namespace std;
int const n=10;
int main()
{
     string nam[n],namp[n],namf[n];
     int mark[n],cp=0,cf=0;

     cout<<"Enter Names and Marks of 10 Students respectively"<<endl;
     for(int i=0;i<n;i++)
     cin>>nam[i]>>mark[i];
     cout<<endl;

     for(int i=0;i<n;i++)
     {
         if(mark[i]>=50)
         {
             namp[cp]=nam[i];
             cp++;
         }
         else
         {
             namf[cf]=nam[i];
             cf++;
         }
     }

     cout<<"Number of passed students="<<cp<<endl;
        for(int i=0;i<cp;i++)
           cout<<namp[i]<<endl;
     cout<<endl;

    cout<<"Number of failed students="<<cf<<endl;
        for(int i=0;i<cf;i++)
            cout<<namf[i]<<endl;
     cout<<endl;
     return 0;
}
