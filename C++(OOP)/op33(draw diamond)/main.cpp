#include <iostream>
using namespace std;
int main()
{
    int i,j,k,height=4,star=1,space=3;

    for(i=height-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            cout<<" ";

        for(k=1;k<=star;k++)
            cout<<"*";
            star+=2;
        cout<<endl;
    }


    for(i=height;i>=1;i--)
        {
    for(j=i;j<=space;j++)
       cout<<" ";
       for(k=1;k<=star;k++)
        cout<<"*";
       star-=2;
       cout<<endl;
        }
    return 0;
}
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
