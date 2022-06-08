#include <iostream>

using namespace std;

int main()
{
    int const n=4;
    int i, a[n],r,m;
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<endl<<"input m"<<endl;
        cin>>m;
        cout<<endl;
        for(i=0;i<n;i++)
        {
            r=a[i]%m;


            cout<<a[i]/m<<"  "<<r<<endl;
        }
        /*write c+ program to read a set of n integeers values ,
        print the number and the reminder when the number divided by m
        2
5
8
6

input m
2

1  0
2  1
4  0
3  0
*/

    return 0;
}
