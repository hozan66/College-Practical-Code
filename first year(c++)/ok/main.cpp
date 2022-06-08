#include <iostream>
using namespace std;
int main()
{
     int const n=10;
int i,j,a[n],k,x=0,p=0,m,b[n];
cout<<"Enter "<<n<<" elements: ";
for(i=0;i<n;i++)
    cin>>a[i];
cout<<endl;

cout<<" A "<<endl;
cout<<"---"<<endl;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]==a[j])
{
    x++;
    m=0;
 for(k=0;k<x;k++)
    if(a[i]==b[k])
        m++;

    if(m==0)
    b[p++]=a[i];

  break;
}
for(i=0;i<p;i++)
    cout<<b[i]<<endl;


    return 0;
}
/*print the number once that repeated in array
Enter 10 elements: 22 11 70 11 35 20 70 20 20 11

 A
---
11
70
20

*/
