#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number & elements of array\n";
  cin>>n;
  int i,a[n],b[n],c[n],k=0,p=0,sumpos=0,sumneg=0;
  float avrpos,avrneg;
  cout<<endl;
  for(i=0;i<n;i++)
    cin>>a[i];
    cout<<endl;

    for(i=0;i<n;i++)
        if(a[i]<100&&a[i]>-100)
    {
        if(a[i]>0)
        {
        sumpos=sumpos+a[i];
        b[k]=a[i];
        k++;
        }
        else if(a[i]<0)
        {
        sumneg=sumneg+a[i];
        c[p]=a[i];
        p++;
        }
    }
    avrpos=sumpos/float (k);
    avrneg=sumneg/float (p);
    cout<<"vector pos\n";
    for(i=0;i<k;i++)
        cout<<b[i]<<endl;
    cout<<endl;

    cout<<"vector neg\n";
    for(i=0;i<p;i++)
        cout<<c[i]<<endl;
    cout<<endl;

    cout<<"avrpos="<<avrpos<<"\navrneg="<<avrneg<<endl;

    return 0;
}
/*find between this range -99 until 99 without 0
positive numbers ,negative numbers , ignore zeros
and put each one in array, then find the average

enter number & elements of array
8

298 0 -187 4 -6 22 -1 9

vector pos
4
22
9

vector neg
-6
-1

avrpos=11.6667
avrneg=-3.5

*/
