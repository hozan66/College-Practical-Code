#include <iostream>
using namespace std;
int li(int x[],int m,int k);
int main()
{
    int const n=10;
    int j,a[n],k1,m1;
    for(j=0;j<n;j++)
    cin>>a[j];
cout<<endl;

cout<<"input the value of k"<<endl;
cin>>k1;
cout<<endl;
m1=li(a,n,k1);
for(j=0;j<m1;j++)
cout<<a[j]<<endl;
    return 0;
    }
int li(int x[],int m,int k)
{
  int i,p=0;
    for(i=0;i<m;i++)
        if(x[i]!=k)
        {
            x[p]=x[i];
            p++;
        }
        return p;

}
/*write c++ program to remove k value from a list of number and print it using function.
1 2 3 1 2 5 2 6 6 2

input the value of k
2

1
3
1
5
6
6

*/
