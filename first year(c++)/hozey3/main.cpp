#include <iostream>
using namespace std;
int nam(string na[],string na2[],int n,int m);
int main()
{
    int n,m,i,j,z;
    cout<<"enter the value of n and how many names do you want to delete m"<<endl;
    cin>>n>>m;
    string na[n],na2[n];
    for(i=0;i<n;i++)
        cin>>na[i];
    cout<<endl;
    for(j=0;j<m;j++)
        cin>>na2[j];
    cout<<endl;

     z=nam(na,na2,n,m);
       for(i=0;i<z;i++)
        cout<<na[i]<<endl;
    return 0;
}
int nam(string na[],string na2[],int n,int m)
{
    int i,j,a=0,p=0;
    for(i=0;i<n;i++)
     {a=0;
        for(j=0;j<m;j++)
        if(na[i]!=na2[j])
        {
            a++;
        if(a==m)
        {na[p]=na[i];
        p++;}
        }
     }
     return p;
}
/*write c++ program to read and print out a list of n student's name, then delete k name's from the list using function
enter the value of n and how many names do you want to delete m
4 2
hoz nor bor sho

hoz sho

nor
bor

*/
