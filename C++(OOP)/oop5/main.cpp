#include <iostream>
using namespace std;
int main()
{
    int const n=6;
    int i,a[n],c;

    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    for(i=0;i<n/2;i++)
    {c=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=c;
    }

    for(i=0;i<n;i++)
cout<<a[i]<<endl;
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
