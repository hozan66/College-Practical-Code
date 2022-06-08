#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,n;
    float x,y=0;
    cout<<"enter value of n\n";
    cin>>n;
    cout<<"enter value of x\n";
    cin>>x;
    for(i=n;i>0;i--)
        y+=i/pow(x,(n+1)-i);
        cout<<"y="<<y<<endl;
    return 0;
}
/*y= 5/x^1 + 4/x^2 + 3/x^3 + 2/x^4 + 1/x^5
Input value of n
5
Input value of x
2
sum=4.03125

*/
