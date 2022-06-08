#include <iostream>
using namespace std;
int const n=3,m=3;
void mat(int x[n][m],int k,int h);
int main()
{
    int i,j,a[n][m],k1,h1;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    cin>>a[i][j];
cout<<endl;

cout<<"enter value of k&h"<<endl;
cin>>k1>>h1;
cout<<endl;
mat(a,k1,h1);
for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;}
    return 0;
    }
    void mat(int x[n][m],int k,int h)
{
  int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        if(x[i][j]==k)
        x[i][j]=h;
}
/*write c++ program to read a matrix n*m and change value k in matrix with value h then print new matrix using function.
5 4 2
6 8 9
2 1 2

enter value of k&h
2 7

5 4 7
6 8 9
7 1 7

*/
