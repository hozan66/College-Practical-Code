#include <iostream>
using namespace std;
int main()
{
    int const n=6;
    int i,x,a[n],sum=0;
    float mean;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<endl;

    mean=sum/float(n);
    cout<<"mean="<<mean<<endl;
    cout<<"enter the value of x"<<endl;
    cin>>x;
    cout<<endl;

    for(i=0;i<n;i++)
    {
        if(a[i]<mean)
            cout<<a[i]<<" * "<<endl;
        else if(a[i]>=mean&&a[i]<=x)
            cout<<a[i]<<" ** "<<endl;
        else
            cout<<a[i]<<" *** "<<endl;
    }
    return 0;
}
/*output is
82 70 50 90 40 80

mean=68.6667
enter the value of x
80

82 ***
70 **
50 *
90 ***
40 *
80 **
*/
