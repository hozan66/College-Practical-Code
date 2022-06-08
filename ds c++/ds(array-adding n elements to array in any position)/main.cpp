#include <iostream>
using namespace std;
int main()
{
    int const z=10;
    int i,j,n,ar[z],pos,m,k;
cout<<"Enter number && elements of array\n";
    cin>>n; cout<<endl;
	for(i=0;i<n;i++)
	cin>>ar[i];
	cout<<endl;

	cout<<"how many elements you will add?\n";
	cin>>m;
	cout<<"\nposition is?\n";
	cin>>pos;
	cout<<"enter the elements\n";
	for(j=1;j<=m;j++)
	{

	    cin>>k;
	for(i=n;i>=pos;i--)
	ar[i]=ar[i-1];
	ar[pos-1]=k;
    n++;
	}


	cout<<"\nNew array\n";
    for(i=0;i<n;i++)
	cout<<ar[i]<<endl;
    return 0;
}
/*adding n elements to array in any position
Enter number && elements of array
3

11
22
33

how many elements you will add?
2

position is?
2
enter the elements
99
88

New array
11
88
99
22
33

*/
