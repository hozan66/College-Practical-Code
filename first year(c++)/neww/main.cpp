#include <iostream>
using namespace std;
int main()
{
    int const n=3;
int i,j,a[n][n],k=0,p=0;
cout<<"Enter Matrix 3*3\n";
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>a[i][j];
cout<<endl;


      for(i=0;i<n;i++)
        {
                for(j=0;j<n;j++)
                {
                     if(a[i][j]==0)
                        a[i][j]=1;
                     else if(a[i][j]%2==0)
                           k++;
                    else
                       p++;

                       cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }

      cout<<"k="<<k<<" "<<"p="<<p<<endl;
    return 0;
}
/*count even number and odd number
and turn 0 into 1??
Enter Matrix 3*3
5 2 0
4 6 3
0 8 0

5 2 1
4 6 3
1 8 1
k=4 p=2

*/
