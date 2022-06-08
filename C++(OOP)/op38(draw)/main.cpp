#include <iostream>
using namespace std;

int main()
{
    int i,j,k;
    int star=7;
    int space=star/2;
    int height=star-space;

    for(i=height;i>=1;i--)
    {
        for(j=i;j<=space;j++)
            cout<<" ";
        for(k=1;k<=star;k++)
            cout<<"*";
            star-=2;

        cout<<endl;
    }

    cout<<endl;

    star=1;
    for(i=1;i<=height;i++)
    {
        for(j=i;j<=space;j++)
            cout<<" ";
        for(k=1;k<=star;k++)
            cout<<"*";
            star+=2;
        cout<<endl;
    }
    return 0;
}
/*
*******
 *****
  ***
   *

   *
  ***
 *****
*******

*/
