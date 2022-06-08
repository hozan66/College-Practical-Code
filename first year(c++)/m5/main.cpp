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
             y[i][j]=x[j][3-i];
            cout<<y[i][j]<<" ";
         }

            cout<<endl;
        }
        cout<<endl;

        for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
         {
             y[i][j]=x[j][(n-1)-i];
            cout<<y[i][j]<<" ";
         }

            cout<<endl;
        }
    return 0;
}
/*turn this matrix 90 degree on the left
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13

4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13

*/
