#include <iostream>
using namespace std;
int main()
{
    int const z=20;
    int sum=0,sumeven=0, sumodd=0,x,k=0,a[z],b[z],p=0,c[z],d[z];
    cin>>x;
    while(sum<100&&x<100)
    {
        if(x%2==0)
            {
                  a[k++]=x;
        sumeven=sumeven+x;}
        else if (x%2!=0)
        {
        b[p++]=x;
        sumodd=sumodd+x;
            }
    sum=sum+x;
    cin>>x;
    }
    cout<<"\nArray of even numbers\n";
    int i=0;
    while(i<k)
        {
            c[i]=a[k-i-1];
         cout<<c[i]<<endl;
         i++;

    }

  cout<<"\nArray of odd numbers\n";
 int j=0;
    while(j<p)
        {
            d[j]=b[p-j-1];
         cout<<d[j]<<endl;
         j++;
    }
cout<<endl;
    cout<<"sumeven="<<sumeven<<endl;
    cout<<"sumodd="<<sumodd<<endl;
    cout<<"sum="<<sum<<endl;
    return 0;
}
/*put even and odd numbers in arrays and inverse them,then stop the program when summation of numbers you entered equal 100?
1
2
3
4
5
6
22
33
42
11

Array of even numbers
42
22
6
4
2

Array of odd numbers
33
5
3
1

sumeven=76
sumodd=42
sum=118

*/
