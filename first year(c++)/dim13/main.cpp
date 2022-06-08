#include <iostream>
using namespace std;
int main()
{int const row=3,col=3;
int i,j,a[row][col],c;
cout<<"input matrix A"<<endl;
for(i=0;i<row;i++)
for(j=0;j<col;j++)
cin>>a[i][j];
cout<<endl;

cout<<"Matrix A"<<endl;
for(i=0;i<row;i++){
for(j=0;j<col;j++)
    cout<<a[i][j]<<" ";
cout<<endl;}
cout<<endl;

for(j=0;j<col;j++){
c=a[0][j];
a[0][j]=a[row-1][j];
a[row-1][j]=c;}

cout<<"Matrix A after swap"<<endl;
for(i=0;i<row;i++){
for(j=0;j<col;j++)
        cout<<a[i][j]<<" ";
cout<<endl;}

        return 0;
}
/* write c++ program to swap the first row with the last row
input matrix A
1 2 3
4 5 6
7 8 9

Matrix A
1 2 3
4 5 6
7 8 9

Matrix A after swap
7 8 9
4 5 6
1 2 3
*/
