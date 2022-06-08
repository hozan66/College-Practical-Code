#include <iostream>
using namespace std;
int main()
{
    int const row=3;
    int const col=3;
    int a[row][col],i,j;
     for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    cin>>a[i][j];
    cout<<endl;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout<<a[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}
/*to input row row and print column column            //like transpose
1 2 3
4 5 6
7 8 9

1 4 7
2 5 8
3 6 9
*/
