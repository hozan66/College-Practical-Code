#include <iostream>
using namespace std;
int main()
{//write output for the below code:
 int a[10][10],i=0,j=0,sum=0;
 for(i=0;i<=3;i++)
    for(j=3;j>=0;j--)
    a[i][j]=i+j;
 cout<<"print matrix\n"<<endl;
 for(i=0;i<=3;i++)
 {
     for(j=0;j<=3;j++)
        cout<<a[i][j]<<" ";
     cout<<endl;
 }
 for(i=0;i<=3;i+=2)
    sum=sum+a[i][i];
    cout<<"sum="<<sum<<endl;
    return 0;
}
/*output is
print matrix

0 1 2 3
1 2 3 4
2 3 4 5
3 4 5 6
sum=4

*/
