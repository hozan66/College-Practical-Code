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

    for(i=0;i<n;i+=2)
    {
        for(j=0;j<n;j+=2)
        cout<<a[i][j]<<"  ";
            cout<<endl<<endl;
    }

     cout<<endl;
     for(i=0;i<n;i+=2)
    {
        for(j=0;j<n;j+=2)
            if(i!=(n-1)/2||j!=(n-1)/2)
        cout<<a[i][j]<<"  ";
            else
            cout<<" ";
        cout<<endl<<endl;
    }
    return 0;
}
/*print the
1 2 3
4 5 6
7 8 9

1  3

7  9


1  3

7  9

*/
