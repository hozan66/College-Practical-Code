#include <iostream>
using namespace std;
int main()
{
    int const n=6;
    int i,j,a[n],c;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<endl;

      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          if(a[j]>a[i])
          {c=a[i];
        a[i]=a[j];
        a[j]=c;
          }
      }
      cout<<"A"<<endl;
        for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
/*sort
12
10
64
85
99
82

A
99
85
82
64
12
10
*/
