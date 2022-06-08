/*
2- Write a C++ program to read a vector (one dimensional array) of 10 integer elements, then find
and print the average of the positive numbers only.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   const int n=10;
    int a[n],i,sumpos=0;
    float avrpos,x=0;
    cout<<"Enter The Vector of Size:"<<n<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            sumpos=sumpos+a[i];
            x++;
        }
    }
    avrpos=sumpos/x;
    cout<<"Average of positive Numbers="<<avrpos<<endl;
    return 0;
}
/*
Enter The Vector of Size:10
5 -12 15 -9 5 -20 10 -25 7 3

Average of positive Numbers=7.5
*/
