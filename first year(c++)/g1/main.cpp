#include <iostream>
using namespace std;
int main()
{
    int const n=3;
    int i,j,a[n][n],mx;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    cout<<endl;

    mx=a[0][0];
      for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        if(mx<a[i][j])
        mx=a[i][j];
    cout<<"largest element ="<<mx<<endl;
    return 0;
}
/*find the largest element in matrix
5 8 6
9 5 10
11 4 3

largest element =11

*/
