#include <iostream>
#include <math.h>
using namespace std;
void sumv(int x[],int y[],int z[],int m);
int main()
{
    int const n=6;
    int j,a[n],b[n],q[n],c[n],o[n];
  for(j=0;j<n;j++)
    cin>>a[j]>>b[j]>>q[j];
  cout<<endl;

  sumv(a,b,c,n);
  sumv(c,q,o,n);
  cout<<"vector O"<<endl;
  for(j=0;j<n;j++)
    cout<<o[j]<<endl;
    return 0;
}
void sumv(int x[],int y[],int z[],int m)
{
    int i;
    for(i=0;i<m;i++)
       z[i]=x[i]+y[i];
}
/*
On=An+Bn+Cn
2 4 2
6 1 2
1 2 3
3 2 1
1 2 1
4 5 0

vector O
8
9
6
6
4
9

*/

