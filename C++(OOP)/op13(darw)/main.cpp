#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        if(i%2==0)
            cout<<" *";
        else
        cout<<"* ";
        cout<<endl;
    }
    cout<<endl;

    int max_stars=7;
    int p_space=max_stars/2; //p_space=3
    int p_height=max_stars-p_space;//p_height=4
    for(i=p_height;i>=1;i--)//i=4
        {
    for(j=i;j<=p_space;j++)
       cout<<" ";
       for(int k=1;k<=max_stars;k++)//max_stars=7
        cout<<"*";
       max_stars-=2;
       cout<<endl;
         }
    return 0;
}
/*

* * * *
 * * * *
* * * *
 * * * *

*******
 *****
  ***
   *
*/
