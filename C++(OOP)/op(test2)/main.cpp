#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int const siz=10;
    int n,x=0,a[siz];
    cout<<"Enter a Number: ";
    cin>>n;
    for(int i=0;n!=0;i++)
    {
        a[x]=n%10;
        x++;
        n/=10;
    }
    cout<<endl;
    for(int i=x-1;i>=0;i--)
        cout<<a[i]<<endl;

    return 0;
}
/*write a C++ program to read a five-digit number, separate the number into
its individual digit and prints each digit on a different line.
please note that you need to use division (/) and modulus (%) operators,
for example, if the user types in (42339) the program should print:
4
2
3
3
9

Enter a Number: 42339

4
2
3
3
9

*/
