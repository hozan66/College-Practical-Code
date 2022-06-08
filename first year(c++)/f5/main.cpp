#include <iostream>
using namespace std;
int ma(int x,int y);
int main()
{
    int a,b,maximum;
    cin>>a>>b;
 cout<<endl;
 maximum=ma(a,b);
 cout<<"maximum="<<maximum<<endl;
    return 0;
}
int ma(int x,int y)
{
    int max;
   if(x>y)
    max=x;
   else
    max=y;
    return (max);
}
/*write c++ program to find the maximum between two integer numbers by using function
765
977

maximum=977

*/
