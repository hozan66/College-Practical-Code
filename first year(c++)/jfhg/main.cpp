#include <iostream>
using namespace std;
int main()
{
    int const row=3;
    int const col=3;
    int a[row][col],i,j,sum;
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    cin>>a[i][j];
    cout<<endl;
        for(j=0;j<col;j++)
        {
            sum=0;
            for(i=0;i<row;i++)
            sum=sum+a[i][j];
        cout<<"sum="<<sum<<endl;
        }
    return 0;
}
/*find the sum of each column
1 2 3
4 5 6
7 8 9

sum=12
sum=15
sum=18
*/
