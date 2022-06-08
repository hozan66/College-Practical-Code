#include <iostream>
using namespace std;
int so(int x);
int main()
{
    int m1,m2;
    float k;
    cin>>m1>>m2;
 k=(so(m1)*so(m2))/2.;
 cout<<"k="<<k<<endl;
    return 0;
}
int so(int x)
{
    int f=1,i;
   for(i=1;i<=x;i++)
    f=f*i;
    return f;
}
/*write c++ program to find the value of k from the below form by using function
k=n!*m!/2
2
3
k=6

*/
