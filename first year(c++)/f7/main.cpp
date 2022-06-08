#include <iostream>
using namespace std;
int ar(int x,int y);
int main()
{
    int a,b,area,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cin>>a>>b;
 area=ar(a,b);
 cout<<"area="<<area<<endl;
}
    return 0;
}
int ar(int x,int y)
{
    int area;
    area=x*y;
    return (area);
}
/*write c++ program to find the value of rectangular area repeated n times , by using function
2
5
4
area=20
6
9
area=54

*/
