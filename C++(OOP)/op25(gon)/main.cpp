#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,i,x;
    float sum=1;
    cout<<"input n & x\n";
    cin>>n>>x;
    int p=1,k=1;
    for(i=1;i<n;i++)
    {
         p++;
        sum=sum+k*(float (i)/pow(x,i*2));
        if(p==3)
        {
            k=-k;
            p=0;
        }

    }
    cout<<"sum="<<sum<<endl;
    return 0;
}
/*sum= 1 + 1/x^2 + 2/x^4 - 3/x^6 - 4/x^8 - 5/x^10.......
input n & x
6
1
sum=-8

*/
