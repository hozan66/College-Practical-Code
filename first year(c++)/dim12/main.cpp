#include <iostream>
using namespace std;
int main()
{int const row=3,col=3;
int i,j,a[row][col],c;
for(i=0;i<row;i++)
for(j=0;j<col;j++)
cin>>a[i][j];

cout<<endl<<"Matrix A "<<endl;
for(i=0;i<row;i++){
for(j=0;j<col;j++)
    cout<<a[i][j]<<" ";
cout<<endl;}
cout<<endl;

for(i=0;i<row;i++){
c=a[i][0];
a[i][0]=a[i][col-1];
a[i][col-1]=c;}

for(i=0;i<row;i++){
for(j=0;j<col;j++)
        cout<<a[i][j]<<" ";
cout<<endl;}

        return 0;
}
/* write c++ program to swap the first column with the last column
1 2 3
4 5 6
7 8 9

Matrix A
1 2 3
4 5 6
7 8 9

3 2 1
6 5 4
9 8 7

*/
