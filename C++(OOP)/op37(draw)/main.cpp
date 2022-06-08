#include <iostream>
using namespace std;

int main()
{
    int n=7;
    int i,j,k;

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n-1;j++)
            cout<<" ";
            for(k=1;k<=i;k++)
                cout<<"*";
        cout<<endl;
    }

    cout<<endl;

      for(i=n;i>=1;i--)
    {
        for(j=i;j<=n-1;j++)
            cout<<" ";
            for(k=1;k<=i;k++)
                cout<<"*";
        cout<<endl;
    }

    return 0;
}
/*
      *
     **
    ***
   ****
  *****
 ******
*******

*******
 ******
  *****
   ****
    ***
     **
      *

*/
