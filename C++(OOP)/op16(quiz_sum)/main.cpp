#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,n;
    float sum=0,j=0,x;
    cout<<"input value of n & x \n";
    cin>>n>>x;
   for(i=1;i<=n;i++)
   {
         j+=2;
       sum+=j/pow(x,2*i-1);
         if (j==6)
            j=0;

   }
   cout<<"sum="<<sum<<endl;
    return 0;
}
/*
sum= 2/x + 4/x^3 + 6/x^5 + 2/x^7 + 4/x^9 + 6/x^11.........
input value of n & x
4
1
sum=14

*/
