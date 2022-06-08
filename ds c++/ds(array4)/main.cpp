#include <iostream>
using namespace std;
int main()
{
    int const z=10;
    int i,n,arr[z];
cout<<"Enter number && elements of array\n";
    cin>>n;
    cout<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<endl;

for(i=0;i<n-1;i++)
    arr[i]=arr[i+1];
    n--;

	cout<<"\nNew array\n";
    for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
    return 0;
}
/*deleting an element of array at the beginning
Enter number && elements of array
7

88 11 22 33 44 55 66 77


New array
11
22
33
44
55
66

*/
