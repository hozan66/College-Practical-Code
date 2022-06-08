#include <iostream>

using namespace std;

int main()
{
    int const n=6;
    int i,j,a[n],c;
    for(i=0;i<n;i++)
    cin>>a[i];
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          if(a[j]>a[i])
          {c=a[i];
        a[i]=a[j];
        a[j]=c;
          }
      }cout<<endl<<"A"<<endl;
        for(i=0;i<n;i++)
    cout <<a[i]<< endl;
    return 0;
}
/*
4
5
10
3
2
20

A
20
10
5
4
3
2
*/
