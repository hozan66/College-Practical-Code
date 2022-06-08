#include <iostream>
#include <cmath>   // #include <math.h>    both of them right
using namespace std;
int main()
{
    int i,n;
    float sum=0,x;
    cout<<"Input value of n\n";
    cin>>n;
    cout<<"Input value of x\n";
    cin>>x;
    for(i=1;i<=n;i++)
        sum+=(n+1-i)/pow(x,i);
    cout<<"sum="<<sum<<endl;
    return 0;

}
/*sum= 5/x^1 + 4/x^2 + 3/x^3 + 2/x^4 + 1/x^5
Input value of n
5
Input value of x
2
sum=4.03125

*/
