#include <iostream>
using namespace std;
int main()
{
    int const n=3;
    int i,j,x[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
       cin>>x[i][j];
    cout<<endl;

    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        {
            if(i<j)
                cout<<x[i][j]<<" ";
            else
                cout<<"  ";
        }
         cout<<endl;
        }
    return 0;
}
/*print the lower triangular matrix
1 2 3
4 5 6
7 8 9

  2 3
    6
*/
