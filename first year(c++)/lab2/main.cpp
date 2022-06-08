#include <iostream>
using namespace std;
int li(int x[],int m,int k);
int main()
{
    int const n=8;
    int i,a[n],k1,m1;
    cout<<"Enter "<<n<<" elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    cout<<"input value of k: ";
    cin>>k1;
    cout<<endl;
    m1=li(a,n,k1);

    for(i=0;i<m1;i++)
        cout<<a[i]<<endl;
    return 0;
}
int li(int x[],int m,int k)
{
    int i,p=0;
    for(i=0;i<m;i++)
        if(x[i]!=k)
    {
        x[p]=x[i];
        p++;
    }
        return p;
    }

/*??delete certain number from the list
Enter 8 elements: 11 22 33 11 44 55 33 77

input value of k: 11

22
33
44
55
33
77

*/
