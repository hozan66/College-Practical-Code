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
        for(i=0;i<row;i++)
        {
            sum=0;
            for(j=0;j<col;j++)
            sum=sum+a[i][j];
        cout<<"sum="<<sum<<endl;
        }
    return 0;
}
/*find the sum of each row
2 3 7
5 10 2
8 10 1

sum=12
sum=17
sum=19
*/
