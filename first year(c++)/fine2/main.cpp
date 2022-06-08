#include <iostream>
#include <math.h>
using namespace std;
int fa(int n);
int main()
{
    int const m=4;
    int x,j;
    float y;
    cin>>x;
    for(j=1;j<=m;j++)
        y+=pow(x,j)/float(fa(j+1));
        cout<<"y="<<y<<endl;
    return 0;
}
int fa(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
/*
y= x/2! + x^2/3! + x^3/4! + x^4/5!
1
y=0.716667
*/
