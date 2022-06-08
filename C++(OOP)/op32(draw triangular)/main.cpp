#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=i;j++)
        cout<<j%2<<" ";
        cout<<endl;
    }

    return 0;
}
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
1 0 1 0 1 0
1 0 1 0 1 0 1
*/
