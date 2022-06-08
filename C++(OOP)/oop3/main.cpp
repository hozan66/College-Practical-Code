#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n],index1,max1;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;

    max1=arr[0];
    for(i=0;i<n;i++)
    if(arr[i]>=max1)
    {
   max1=arr[i];
   index1=i;
    }
cout<<"index1="<<index1<<" max1="<<max1<<endl;

 int max2=0,index2;
    for(i=0;i<n;i++)
    if(arr[i]>=max2&&arr[i]<max1)
    {
   max2=arr[i];
   index2=i;
    }
cout<<"index2="<<index2<<" max2="<<max2<<endl;

int mm=arr[0],indexmm;
    for(i=0;i<n;i++)
    if(arr[i]<=mm)
    {
   mm=arr[i];
   indexmm=i;
    }
cout<<"indexmm="<<indexmm<<" mm="<<mm<<endl;

int sum=0;
float avr;
for(i=0;i<n;i++)
    sum=sum+arr[i];
    avr=sum/float(n);
    cout<<"sum="<<sum<<"\n  average="<<avr<<endl;
    return 0;
}
/*
find the maximum, second maximum, minimum and their index ,sum, average of array?
6
82 88 90 90 92 94

index1=5 max1=94
index2=4 max2=92
indexmm=0 mm=82
sum=536
  average=89.3333


*/
