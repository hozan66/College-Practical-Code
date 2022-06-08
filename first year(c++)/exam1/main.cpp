#include <iostream>
using namespace std;
int main()
{
    int const n=3,m=3;
    int a[n][m],i,j,sum=0;
    cout<<"input Matrix An*m"<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>a[i][j];
    cout<<endl;

    cout<<"Matrix An*m"<<endl;
     for(i=0;i<n;i++)
     {
    for(j=0;j<m;j++)
    cout<<a[i][j]<<" ";
        cout<<endl;
     }
     cout<<endl;

     for(i=0;i<n-1;i++)
    for(j=1;j<m;j++)
     sum=sum+a[i][j];
    cout<<"sum="<<sum<<endl;
    return 0;
}
/*write c++ program to read and print out matrix An*m. then find the sum outside last row and first column.
(find the sum of Matrix without first column and the last row)
input Matrix An*m
1 2 3
4 5 6
7 8 9

Matrix An*m
1 2 3
4 5 6
7 8 9

sum=16

*/
