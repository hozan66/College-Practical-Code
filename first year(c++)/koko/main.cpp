#include <iostream>
using namespace std;
int main()
{
int a[10];
for(int i=0;i<10;i++)
    cin>>a[i];
int i=0;
int j=9;
int med =10/2;
for(int i=0;i<med;i++)
  {
    int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
         j--;
  }
         for(int i=0;i<10;i++)
cout<<a[i]<<" ";
cout<<endl;
    return 0;
}
/* output is
1 2 3 4 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1
*/
