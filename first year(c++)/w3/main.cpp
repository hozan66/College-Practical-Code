#include <iostream>
using namespace std;
int main()
{
    int i=0;
    for (i=20;i>=1;i-=2)
    {
        if(i%3!=0)
            continue;
        cout<<i<<endl;
    }
    return 0;
}
/*
18
12
6
*/
