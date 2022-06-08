#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int i,sum1=0,sum2=0,x,y,z,n;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>x>>y;
    sum1=sum1+pow(x,2);
    sum2=sum2+x*y;
    z=sum1+sum2;
}
cout<<"z="<<z<<endl;
    return 0;
}
/*write c++ program to find the value of Z from the below form:
sum1=x1^2+x2^2+x3^2.....
sum2=x1y1+x2y2+x3y3......
3
2 1
4 3
1 0
z=35
*/
