#include <iostream>
using namespace std;
void saw(int&a,int&b);
int const n=6;
int a[n];
int main()
{
    int i,n;
    cout<<"input size of array\n";
    cin>>n;
      int *a;
    a=new int [n];
    cout<<"enter elements of array\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<endl;

    for(i=0;i<n/2;i++)
    saw(a[i],a[n-i-1]);

    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
void saw(int&a,int&b)
{int c;
  c=a;
  a=b;
  b=c;
}
//swap(let it be inverse) of array using function
/*
input size of array
4
enter elements of array
11
22
55
88

88
55
22
11

*/
