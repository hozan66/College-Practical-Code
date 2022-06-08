#include <iostream>
using namespace std;
int main()
{
    int const size=10;
    int i,n,k,arr[size];
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;

       arr[n]=k;
       n++;
    for(i=0;i<n;i++)
        cout<<arr[i]<<endl;

    return 0;
}
/*adding an element to array at end
5 7
12 6 15 45 22

12
6
15
45
22
7

*/
