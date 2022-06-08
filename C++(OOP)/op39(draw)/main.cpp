#include <iostream>
#include <cmath>   // in CodeBlock we must write cmath
using namespace std;
int main()
{
   int i,j,k;
    int n=3;
    for(i=n;i>=-n;i--)
    {
      for(j=abs(i);j<=n;j++)
        cout<<"*";
        cout<<endl;
    }

    cout<<endl;

     for(i=n;i>=-n;i--)
    {
      for(j=1;j<=abs(i);j++)
        cout<<" ";
        for(k=abs(i);k<=n;k++)
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
***
**
*

   *
  **
 ***
****
 ***
  **
   *

*/
