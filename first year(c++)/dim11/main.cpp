#include <iostream>
using namespace std;
int main()
{int const n=3,m=2;
int i,j,a[n][m],b[m][n];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>a[i][j];

cout<<endl<<"Matrix A "<<endl;
for(i=0;i<n;i++){
for(j=0;j<m;j++)
    cout<<a[i][j]<<" ";
cout<<endl;}
cout<<endl;

for(i=0;i<n;i++)
for(j=0;j<m;j++)
 b[j][i]=a[i][j];

for(i=0;i<m;i++){
for(j=0;j<n;j++)
        cout<<b[i][j]<<" ";
cout<<endl;}

        return 0;
}
/* write c++ program to print the matrix and it's transpose
2 1
3 4
9 8

Matrix A
2 1
3 4
9 8

2 3 9
1 4 8

*/
