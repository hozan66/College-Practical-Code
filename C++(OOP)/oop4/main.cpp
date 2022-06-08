#include <iostream>
using namespace std;
int main()
{
    int const n=6;
    int i,a[n],b[n];

    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    for(i=0;i<n;i++)
    {
         b[i]=a[n-1-i];
         cout<<b[i]<<endl;
    }

    return 0;
}
/* find inverse of array one dimension
1 2 3 4 5 6

6
5
4
3
2
1

*/

