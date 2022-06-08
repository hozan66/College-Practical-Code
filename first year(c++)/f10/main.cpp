#include <iostream>
using namespace std;
int sumv(int x[],int m);
int main()
{
    int const n=10,p=15,q=20;
    int j,k,l,a[n],b[p],c[q],sa,sb,sc;
    for(j=0;j<n;j++)
    cin>>a[j];
    cout<<endl;
    sa=sumv(a,n);
    for(k=0;k<p;k++)
    cin>>b[k];
    cout<<endl;
    sb=sumv(b,p);
    for(l=0;l<q;l++)
    cin>>c[l];
    cout<<endl;
    sc=sumv(c,q);
    cout<<"sum of the vector A="<<sa<<endl;
    cout<<"sum of the vector B="<<sb<<endl;
    cout<<"sum of the vector C="<<sc<<endl;
    return 0;
}
int sumv(int x[],int m)
{
    int sum=0,i;
    for(i=0;i<m;i++)
        sum=sum+x[i];
    return (sum);
}
/*write c++ program to find the sum out of vector Xm, by using function,
in the main program call the function three times(An, Bp, Cq)
5 3 2 4 7 1 6 4 5 4

4 6 2 9 2 5 7 5 3 3 3 2 1 8 9

5 6 7 8 9 0 0 0 0 1 2 3 4 5 6 7 8 9 6 7

sum of the vector A=41
sum of the vector B=69
sum of the vector C=93

*/
