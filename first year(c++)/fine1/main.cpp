#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=pow(i,2);j+=i)
        cout<<j<<" ";
    cout<<endl;
    }

    return 0;
}
/*output is
1
2   4
3   6   9
4   8  12  16
5  10  15  20  25
*/
