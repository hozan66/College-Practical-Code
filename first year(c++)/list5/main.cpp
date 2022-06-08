#include <iostream>
using namespace std;
int const n=3;
int const m=7;
int i,j,a[n],b[m],c[m+n],k;
int main()
{cout<<" enter the vector A"<<endl;
    for(i=0;i<n;i++)
       {
           cin>>a[i];
           c[i]=a[i];
       }
       cout<<endl<<" enter the vector B"<<endl;
       k=n;
    for(j=0;j<m;j++)
        {
        cin>>b[j];
        c[k]=b[j];
        k++;
    }
    cout<<endl<<"C"<<endl;
    for(j=0;j<n+m;j++)
        cout<<c[j]<<endl;
    return 0;
}
/*
 enter the vector A
0 1 2

 enter the vector B
3 4 5 6 7 8 9

C
0
1
2
3
4
5
6
7
8
9
*/
