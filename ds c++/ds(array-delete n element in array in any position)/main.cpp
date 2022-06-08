#include <iostream>
using namespace std;
int main()
{
    int n,i,j,m,pos;
    cout<<"How many elements do you have\n";
    cin>>n;
    int a[n];
    cout<<"enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    cout<<"How many elements do you to delete\n";
    cin>>m;
    cout<<"Input the position\n";
    cin>>pos;
     for(j=0;j<m;j++)
     {
             for(i=pos-1;i<n-1;i++)
             a[i]=a[i+1];
                  n--;
     }
     cout<<"Your new array\n";
     for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
/*delete n element in array in any position??
How many elements do you have
9
enter the elements
11 22 33 44 55 66 77 88 99

How many elements do you to delete
3
Input the position
3
Your new array
11
22
66
77
88
99

*/
