#include <iostream>
using namespace std;
int main()
{
    int const n=4;
    int i,a[n],r,m;
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<endl<<"input m"<<endl;
        cin>>m;
        cout<<endl;
        for(i=0;i<n;i++)
        {
            r=a[i]%m;
            cout<<a[i]<<"  "<<r<<endl;
        }
        return 0;
}
        /*write c+ program to read a set of n integers values ,
        print the number and the reminder when the number divided by m

4 1 7 8

input m
5

4  4
1  1
7  2
8  3
*/
