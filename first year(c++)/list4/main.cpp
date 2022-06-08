#include <iostream>

using namespace std;

int main()
{
    int const n=3;
    int const m=4;
    int i,a[n],b[m],c[n+m];
    cout<<"A["<<n<<"]=";
    for(i=0;i<n;i++)
        {cin>>a[i];
        c[i]=a[i];
        }
    cout<<"B["<<m<<"]=";
    for(i=0; i<m; i++)
    {
        cin>>b[i];
        c[n+i]=b[i];
    }
    cout<<"C["<<m+n<<"]=";
    for(i=0; i<n+m; i++)
    cout<<c[i]<<" ";
        return 0;
}
/*
A[3]=1 2 3
B[4]=5 6 7 8
C[7]=1 2 3 5 6 7 8*/

