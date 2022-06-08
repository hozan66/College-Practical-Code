#include <iostream>
using namespace std;
int main()
{
    int const z=10;
    int i,n,arr[z],a;
cout<<"Enter number && elements of array\n";
    cin>>n; cout<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<endl;

    n--;

	cout<<"\nNew array\n";
    for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
    return 0;
}
/*deleting an element of array at the end
Enter number && elements of array
4

87 45 12 64


New array
87
45
12

*/
