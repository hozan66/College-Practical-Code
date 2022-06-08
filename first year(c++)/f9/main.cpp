#include <iostream>
using namespace std;
int sumv(int x[],int m);
int main()
{
    int const n=10;
    int j,a[n],s;
    for(j=0;j<n;j++)
    cin>>a[j];
    cout<<endl;
    s=sumv(a,n);
    cout<<"sum of the vector A="<<s<<endl;
    return 0;
}
int sumv(int x[],int m)
{
    int sum=0,i;
    for(i=0;i<m;i++)
        sum=sum+x[i];
    return (sum);
}
/*write c++ program to find the sum of vector A by using function
5 8 2 5 6 4 9 1 3 7

sum of the vector A=50

*/
