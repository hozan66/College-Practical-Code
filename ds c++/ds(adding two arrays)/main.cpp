#include <iostream>
using namespace std;
int main()
{
    int const z=10;
    int a[z],b[z],i,j,m,n,pos;
    cout<<"enter the number of the first array & elements:";
    cin>>m;
    for(j=0;j<m;j++)
        cin>>b[j];
    cout<<endl;

     cout<<"enter the number of the second array & elements:";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

     cout<<"enter the position:";
     cin>>pos;
     cout<<endl;

     for(j=m-1;j>=0;j--)
     {
         for(i=n;i>=pos;i--)
            a[i]=a[i-1];
         a[pos-1]=b[j];
         n++;
     }

     cout<<"The New Array\n";
      for(i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
/*you have two arrays A1, A2, Add the first array in any position of second array??
enter the number of the first array & elements:3
55 66 77

enter the number of the second array & elements:6
11 22 33 44 88 99

enter the position:5

The New Array
11
22
33
44
55
66
77
88
99
*/
