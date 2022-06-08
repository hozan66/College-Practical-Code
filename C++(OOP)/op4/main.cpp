#include <iostream>
using namespace std;
int main()
{
    int i,n,j,y=0,x;
    cout<<"Input value of n\n";
    cin>>n;
    for(i=1;i<=n/2;i++)
    for(j=1;j<=2;j++)
    {
            cin>>x;
           if(i%2==0)
             y+=x;
             else
                y-=x;
        }
     cout<<endl<<"y="<<y<<endl;
       return 0;

}
/* y= -x1 - x2 + x3 + x4 - x5 - x6
Input value of n
6
1 2 3 4 5 6

y=-7

*/
