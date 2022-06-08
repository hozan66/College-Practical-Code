#include <iostream>
using namespace std;
void sumarr(int a[],int siz,int &sum)
{
    sum=0;
    for(int i=0;i<siz;i++)
        sum+=a[i];
}
int main()
{
    int const n=4;
    int x[n],s;
    cout<<"enter elements of size of array 4\n";
      for(int i=0;i<n;i++)
        cin>>x[i];
        cout<<endl;
    sumarr(x,n,s);
    cout<<s;

    return 0;
}
/*
enter elements of size of array 4
1
1
1
1

4
*/
