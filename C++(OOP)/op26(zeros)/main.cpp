#include <iostream>
using namespace std;
int main()
{
    int i,n,x,d=0;
    cout<<"How many numbers you will input\n";
    cin>>n;
        cout<<"input your numbers\n";
    for(i=1;i<=n;i++)
    {
          cin>>x;
          if(x==0)
            d++;
          else
            d=0;
      if(d==3)
        break;
    }
    return 0;
}

/*stop the program when three zeros come sequentially
How many numbers you will input
100
input your numbers
234
344
0
0
344
34
0
40
0
0
0

*/
