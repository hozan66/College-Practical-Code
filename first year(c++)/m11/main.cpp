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
        if(i<j&&i+j>n-1)
           cout<<a[i][j]<<" ";
           else
            cout<<"  ";
        }
            cout<<endl;
    }
    return 0;
}
/*print the
1 2 3
4 5 6
7 8 9


    6

*/
