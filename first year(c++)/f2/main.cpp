#include <iostream>
using namespace std;
int ch(int x);
int main()
{
    int i,n,p,y;
    cin>>n;
 for(i=1;i<=n;i++)
 {
    cin>>y;
 p=ch(y);
 if(p==1)
   cout<<"the value is even"<<endl;
 else
    cout<<"the value is odd"<<endl;
 }
    return 0;
}
int ch(int x)
{
    int m;
    if(x%2==0)
        m=1;
    else
        m=0;
    return (m);
}
/*write c++ program to check a list of n integers values for even by using function
6
8
the value is even
334
the value is even
541
the value is odd
5747
the value is odd
576
the value is even
999
the value is odd
*/
