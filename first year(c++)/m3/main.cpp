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
            if(x[i][j]==0)
                x[i][j]=1;
            else if(x[i][j]%2==0)
               x[i][j]=x[i][j]*2;
            else
                x[i][j]=x[i][j]*3;

                cout<<x[i][j]<<"  ";
        }
         cout<<endl;
        }
    return 0;
}
/*multiply even numbers by 2 and odd numbers by 3 and turn 0 into 1 in matrix
2 3 7
0 1 4
6 0 3

4  9  21
1  3  8
12  1  9
*/
