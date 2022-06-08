#include <iostream>
using namespace std;
int main()
{
    int i,j,k,star=1,height=9,space=4;

    for(i=1;i<=height;i++)
    {
        for(j=1;j<=space;j++)
            cout<<" ";

             for(k=1;k<=star;k++)
                cout<<"*";

                cout<<endl;

                if(i<5)
                {
                    space--;
                    star+=2;
                }
                else
                {
                    space++;
                    star-=2;

                }

    }
    return 0;
}
/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
