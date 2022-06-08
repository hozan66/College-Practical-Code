#include <iostream>
using namespace std;
int const siz=10;
int main()
{
    int const n=10;
    int a[n],i,j,re,d=0,k=0;

    cout<<"Enter elements of array of size 10:\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    for(i=0;i<n;i++)
    {
        d=0;
        for(j=0;j<n;j++)
            if(a[i]==a[j])
            d++;

        if(d>k)
        {
            k=d;
            re=a[i];
        }
    }

    cout<<"the most repeat number is: "<<re<<endl;
    return 0;
}
/*find the most number repeated is array??
Enter elements of array of size 10:
9 3 2 3 3 2 3 2 9 7

the most repeat number is: 3

*/
