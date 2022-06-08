#include <iostream>
using namespace std;
int main()
{int const n=3;
int i,j,a[n][n],k=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
cout<<endl<<" Matrix A "<<endl;
for(i=0;i<n;i++){
for(j=0;j<n;j++)
    cout<<a[i][j]<<" ";
cout<<endl;}
cout<<endl;
for(i=0;i<n;i++)
for(j=0;j<n;j++){
    if(a[j][i]==a[i][j])
k++;}
if(k==n*n)
    cout<<" The matrix is symmetric ";
    else
        cout<<" The matrix isn't symmetric ";
    return 0;
}
/* wrie c++ program to check a square matrix asymmetric or not
5 2 1
3 8 7
9 4 6

 Matrix A
5 2 1
3 8 7
9 4 6

 The matrix isn't symmetric
*/
