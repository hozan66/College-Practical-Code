#include <iostream>
using namespace std;
int main()
{
    int i,n,j,m=0,k,y=0,x;
    cout<<"Input value of n\n";
    cin>>n;
    k=-1;
    for(i=1;i<=n;i++)
    {
        cin>>x;
          y+=k*x;

            m++;
            if(m==2)
            {
                 k=-k;
                 m=0;
            }

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
