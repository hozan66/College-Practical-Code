#include <iostream>
using namespace std;
int maxv(int x[],int n);
int main()
{
    int const m=16;
    int j,a[m],b[m],c[m],maxa,maxb,maxc;
    for(j=0;j<m;j++)
    cin>>a[j]>>b[j]>>c[j];
    cout<<endl;
    maxa=maxv(a,m);
    maxb=maxv(b,m);
    maxc=maxv(c,m);
    cout<<"max number of the vector A="<<maxa<<endl;
    cout<<"max number of the vector B="<<maxb<<endl;
    cout<<"max number of the vector C="<<maxc<<endl;
    return 0;
}
int maxv(int x[],int n)
{
    int ma,i;
    ma=x[0];
    for(i=0;i<n;i++)
    if(ma<x[i])
        ma=x[i];
    return (ma);
}
/*write c++ program to find the maximum value out of vector Xm, by using function,
in the main program call the function three times(Am, Bm, Cm)
1 2 3
4 5 6
7 8 9
9 8 7
6 5 4
3 2 1
11 12 13
14 15 16
17 18 19
19 18 17
54 20 22
33 66 99
23 54 88
86 94 94
90 66 46
8  3  77

max number of the vector A=90
max number of the vector B=94
max number of the vector C=99

*/
