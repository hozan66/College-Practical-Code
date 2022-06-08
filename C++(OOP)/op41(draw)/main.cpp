#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==j||i==7||j==1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int n=9;
    int px=n/2+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==px||j==n+1-px)
                cout<<"*";
            else
                cout<<" ";
        }
        if(i<=n/2)
            px--;
        else
            px++;
        cout<<endl;
    }
    return 0;
}
/*
*
**
* *
*  *
*   *
*    *
*******

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/
