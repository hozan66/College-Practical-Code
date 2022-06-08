#include <iostream>
using namespace std;
void inv(int a[],int b[], int siz)
{
   for(int i=0;i<siz;i++)
    b[i]=a[siz-1-i];
}
int main()
{
    int const n=6;
    int a[n],b[n];
    cout<<"size of array is 6\n";
     for(int i=0;i<n;i++)
        cin>>a[i];

        inv(a,b,n);
          for(int i=0;i<n;i++)
        cout<<b[i]<<endl;


    return 0;
}
/*find the inverse??
size of array is 6
1 2 3 4 5 6
6
5
4
3
2
1

*/
