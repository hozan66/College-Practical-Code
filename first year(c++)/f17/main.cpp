#include <iostream>
using namespace std;
int const n=3;
int summ(int x[n][n]);
int main()
{
int a[n][n],i,j,s;
for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
            cout<<endl;

           s=summ(a);
        cout<<"sum of diagonal="<<s<<endl;
    return 0;
}
int summ(int x[n][n])
{
  int i,sum=0;
    for(i=0;i<n;i++)
        sum+=x[i][i];
return sum;
}
/*write c++ program to read a matrix n*m and find sum of diagonal using function.
1 2 3
4 5 6
7 8 9

sum of diagonal=15

*/
