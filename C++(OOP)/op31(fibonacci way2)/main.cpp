#include <iostream>

using namespace std;

int main()
{
    int i,t,a=0,b=1;
    for(i=0;i<11;i++)
    {
        if(i<2)
            cout<<i<<" ";
        else
        {
             t=a+b;
            cout<<t<<" ";
            a=b;
            b=t;
        }

    }
    return 0;
}
//0 1 1 2 3 5 8 13 21 34 55
