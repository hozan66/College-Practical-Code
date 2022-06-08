#include <iostream>
using namespace std;
int main()
{
    int const row=2;
    int const col=2;
    int a[row][col],i,j,k,b[row][col];
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    cin>>a[i][j];
    cout<<endl<<"input  value of k"<<endl;
    cin>>k;
    cout<<"matrix A"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<"matrix A*"<<k<<endl;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
            b[i][j]=k*a[i][j];
            cout<<b[i][j]<<" ";
            }
        cout<<endl;
        }
    return 0;
}
/* write c++ program to read and print out matrix An*m, then multiply matrix An*m by const k
2 5 4 6

input  value of k
2
matrix A
2 5
4 6

matrix A*2
4 10
8 12
*/
