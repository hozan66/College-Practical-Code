#include <iostream>
using namespace std;
int main()
{
int const n=6;
int i,j,c,a[n],range;
for(i=0;i<n;i++)
    cin>>a[i];
cout<<endl<<"H"<<endl;
 for(i=0;i<n-1;i++)
 {
     for(j=i+1;j<n;j++)
        if(a[j]>a[i])
     {
         c=a[i];
     a[i]=a[j];
     a[j]=c;
     }
 }
 for(i=0;i<n;i++)
cout<<a[i]<<endl;
range=a[0]-a[n-1];
cout<<"range="<<range;

    return 0;
}
/* Assume that we have data within n integer values.
 by using c+ programming invalid the value of range out of the given data (range=max-min)
7
4
3
6
2
1

H
7
6
4
3
2
1
range=6
*/
