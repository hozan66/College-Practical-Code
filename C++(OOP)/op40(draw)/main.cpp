#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
           if(i==j||i+j==10)
              cout<<"*";
            else
              cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
           if(i+j==6||i+j==2*i+4)
              cout<<"*";
            else
              cout<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------------------------"<<endl;

    int n=5;
    int px=1,py=2*n-1;
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
           if(j==px||j==py)
              cout<<"*";
            else
              cout<<" ";
        }
        px++;
        py--;
        cout<<endl;
    }
    cout<<endl;
     px=n;
     py=n;
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
           if(j==px||j==py)
              cout<<"*";
            else
              cout<<" ";
        }
        px--;
        py++;
        cout<<endl;
    }
    return 0;
}
/*
*       *
 *     *
  *   *
   * *
    *

    *
   * *
  *   *
 *     *
*       *
---------------------------------
*       *
 *     *
  *   *
   * *
    *

    *
   * *
  *   *
 *     *
*       *

*/
