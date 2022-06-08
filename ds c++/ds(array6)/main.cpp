#include <iostream>
using namespace std;
int main()
{
    int const z=10;
    int i,n,arr[z],pos;
cout<<"Enter number && elements of array\n";
    cin>>n; cout<<endl;
	for(i=0;i<n;i++)
	cin>>arr[i];
	cout<<endl;

	cout<<"any position of element you want to delete?\n";
	cin>>pos;
	cout<<endl;
	for(i=pos-1;i<n-1;i++)
	arr[i]=arr[i+1];
    n--;

	cout<<"\nNew array\n";
    for(i=0;i<n;i++)
	cout<<arr[i]<<endl;
    return 0;
}
/*deleting an element of array in any position
Enter number && elements of array
5

15 10 40 12 24

any position of element you want to delete?
3


New array
15
10
12
24

*/
