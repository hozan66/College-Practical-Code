#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void sumv(int x[],int y[],int k,int m);
int main()
{
    int const n=6;
    int j,a[n],b[n],c[n],d[n],e[n],f[n],k1,k2,k3;
  for(j=0;j<n;j++)
    cin>>a[j]>>b[j]>>c[j];
  cout<<endl;

  cout<<"enter the value of three constant of vector"<<endl;
  cin>>k1>>k2>>k3;
  cout<<endl;
  sumv(a,d,k1,n);
  sumv(b,e,k2,n);
  sumv(c,f,k3,n);

  cout<<"D"<<setw(6)<<"E"<<setw(6)<<"F"<<endl;
  for(j=0;j<n;j++)
    cout<<d[j]<<setw(6)<<e[j]<<setw(6)<<f[j]<<endl;
    return 0;
}
void sumv(int x[],int y[],int k,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
       y[i]=k*x[i];
    }
}
/*write c++ program to multiply none zero constant by the vector, in the main program call the function 3 times
3An,10Bn,-20Cn

*/
