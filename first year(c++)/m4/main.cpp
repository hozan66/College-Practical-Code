#include <iostream>
using namespace std;
int main()
{
    int const n=4;
    int i,j,x[n][n],y[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
       cin>>x[i][j];
    cout<<endl;

        for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
         {
             y[i][j]=x[3-j][i];
            cout<<y[i][j]<<" ";
         }

            cout<<endl;
        }
        cout<<endl;

        for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
         {
             y[i][j]=x[(n-1)-j][i];
            cout<<y[i][j]<<" ";
         }

            cout<<endl;
        }
    return 0;
}
/*turn this matrix 90 degree on the right
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4

13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4

*/
