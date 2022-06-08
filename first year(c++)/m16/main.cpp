#include <iostream>
using namespace std;
int main()
{
    int const n=4;
    int i,j,a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
       cin>>a[i][j];
    cout<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
            if((i<j||i>j)&&(i+j<n-1||i+j>n-1))  // you can prove it!!
        cout<<a[i][j]<<"  ";
        else
        cout<<"  ";
            }
            cout<<endl;
    }
    return 0;
}
/*print the
1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16

  2  3
5      8
9      12
  14  15

*/
