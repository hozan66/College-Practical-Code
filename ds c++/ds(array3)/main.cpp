#include <iostream>
using namespace std;
int main()
{
    int const size=10;
    int n,k,pos,i,arr[size];
    cout<<"enter number of array\n";
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;

    cout<<"input the position\n";
    cin>>pos;
    cout<<"\nenter an element\n";
    cin>>k;
    for(i=n;i>=pos;i--)
        arr[i]=arr[i-1];
        arr[pos-1]=k;
        n++;

     cout<<"\nNew Array\n";
    for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
/*adding an element to array in any position
enter number of array
6

11
22
33
44
55
66

input the position
3

enter an element
99

New Array
11
22
99
33
44
55
66

*/
