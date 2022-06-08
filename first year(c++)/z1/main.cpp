#include <iostream>
using namespace std;
int main()
{
    int n=6,m=5;
    int i,j,a[n],b[m],c[n],x=0;
    cout<<"input vector A"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    cout<<"input vector B"<<endl;
    for(j=0;j<m;j++)
        cin>>b[j];
        cout<<endl;

        cout<<"vector C (common values)"<<endl;
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        if(a[i]==b[j])
        {
            c[x]=a[i];
             x++;
        }
        for(i=0; i<x; i++)
            cout<<c[i]<<" ";

    return 0;
}
/*
input vector A
1 2 3 4 5 6

input vector B
3 8 7 2 1

vector C (common values)
1 2 3
*/
