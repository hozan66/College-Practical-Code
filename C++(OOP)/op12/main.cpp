#include <iostream>
using namespace std;
int main()
{
    int i,j,k=1,n;
    float sum=0,fac1,fac2;
    cout<<"input the value of n\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fac1=1;
        for(j=1;j<=i;j++)
            fac1*=j;

            fac2=1;
            for(j=1;j<=(2*i)-1;j++)
            fac2*=j;

        sum+=k*(fac1/fac2);
        k=-k;

    }
    cout<<"sum="<<sum<<endl;
    return 0;
}
/*sum=1 -2!/3! +3!/5! -4!/7! +n!/odd!
input the value of n
3
sum=0.716667

*/
