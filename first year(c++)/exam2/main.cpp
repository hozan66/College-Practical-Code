#include <iostream>
using namespace std;

int main()
{
    int const n=6;
    int a[n],i;
    float mean,sum=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

     for(i=0;i<n;i++)
    sum=sum+a[i];
    mean=sum/n;
    for(i=0;i<n;i++)
    if(a[i]>mean)
    cout<<"***"<<endl;
    else
        cout<<"**"<<endl;

    return 0;
}
/*write c++ program to read a list of n integer degrees. print (***)if the degree is above the mean value
and (**) for the degree below the mean.
82
90
68
96
82
96

**
***
**
***
**
***

*/
