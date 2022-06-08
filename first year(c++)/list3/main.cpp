#include <iostream>

using namespace std;

int main()
{
    int const n=10;
    int const m=7;
    int c[n],i,a[m],b[n-m];
    cout<<"C["<<n<<"]=";
    for(i=0;i<n;i++)
        {cin>>c[i];
            if(i<m)
        a[i]=c[i];
        else
            b[i-m]=c[i];
        }
        cout<<endl;
        cout<<"A=";
    for(i=0; i<m; i++)
    cout<<a[i]<<" ";
    cout<<endl<<"B=";
    for(i=0; i<n-m; i++)
    cout<<b[i]<<" ";
        return 0;
}
/*C[10]=0 1 2 3 4 5 6 7 8 9

A=0 1 2 3 4 5 6
B=7 8 9
*/
