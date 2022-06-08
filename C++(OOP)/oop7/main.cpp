#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i,j=6;
    float sum=0,x;
    cout<<"Input value of x\n";
    cin>>x;
    for(i=1;i<=4;i++)
    {
        sum+=pow(x,j)/(2*i*x);
        j-=3;
        if(j==0)
            j=6;
    }

    cout<<"sum="<<sum<<endl;
    return 0;
}
/*
Input value of x
2
sum=22.8333

sum= x^6/2x + x^3/4x + x^6/6x + x^3/8x....
*/
