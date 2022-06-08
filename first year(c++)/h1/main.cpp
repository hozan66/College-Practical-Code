#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{int const n=4;
int i,t1[n],t2[n],max[n];
string su[n];
for(i=0;i<n;i++)
    cin>>su[i]>>t1[i]>>t2[i];
    cout<<endl;

cout<<"subject"<<setw(10)<<"test1"<<setw(10)<<"test2"<<setw(10)<<"max"<<endl;
for(i=0;i<n;i++)
{
    if(t1[i]>t2[i])
    max[i]=t1[i];
    else
        max[i]=t2[i];
cout<<su[i]<<setw(10)<<t1[i]<<setw(10)<<t2[i]<<setw(10)<<max[i]<<endl;

}
    return 0;
}
/*
math
90
96
english
88
96
logic
27
28
physic
82
92

subject     test1     test2       max
math        90        96        96
english        88        96        96
logic        27        28        28
physic        82        92        92
*/
