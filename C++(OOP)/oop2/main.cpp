#include <iostream>
using namespace std;
int main()
{
   int const n=10;
   int i,a[n],b[n],c[n],x=0,y=0,sumeven=0,sumodd=0;
   float avreven,avrodd;
   cout<<"enter array of 10 element\n";
   for(i=0;i<n;i++)
    cin>>a[i];
   cout<<endl;

   for(i=0;i<n;i++)
   {
       if(a[i]%2==0&&a[i]!=0)
       {
           b[x]=a[i];
           x++;
           sumeven=sumeven+a[i];
       }
       else if(a[i]%2!=0)
       {
           c[y]=a[i];
           y++;
            sumodd=sumodd+a[i];
       }
   }
   avreven=sumeven/float(x);
   avrodd=sumodd/float(y);
   cout<<"array of even numbers\n";
   for(i=0;i<x;i++)
    cout<<b[i]<<endl;
   cout<<endl;
   cout<<"avreven="<<avreven<<endl;

   cout<<"array of odd numbers\n";
   for(i=0;i<y;i++)
    cout<<c[i]<<endl;
   cout<<endl;
cout<<"avrodd="<<avrodd<<endl;
    return 0;
}
/* find in array even numbers , odd numbers , put in lists , ignore the zeros ,then find the average for each one
enter array of 10 element
23 25 20 12 0 40 18 0 11 7

array of even numbers
20
12
40
18

avreven=22.5
array of odd numbers
23
25
11
7

avrodd=16.5

*/
