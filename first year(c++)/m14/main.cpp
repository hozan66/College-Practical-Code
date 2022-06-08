#include <iostream>
using namespace std;
int main()
{
    int const n=3;
    int i,j,a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
       cin>>a[i][j];
    cout<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(i==(n-1)/2||j==(n-1)/2)
            a[i][j]=1;
           else
            a[i][j]=0;
        cout<<a[i][j]<<" ";
        }
            cout<<endl;
    }
    return 0;
}
/*print the
1 2 3
4 5 6
7 8 9

0 1 0
1 1 1
0 1 0
*/
