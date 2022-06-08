#include <iostream>
using namespace std;
int main()
{
int i,j,n,sum=0;
cout<<"Enter a number: ";
cin>>n;
for(i=1;i<=n;i++)
{
  for(j=2;j<=i;j++)
  {
      if(i%j==0)
         break;
  }

  if (j==i)
    {
    sum=sum+i;
    cout<<i<<" ";
    }

}
  cout<<"\nsum_prime="<<sum<<endl;
    return 0;
}
/* find prime numbers and the summation of prime numbers from 1 to n assuming that 1 is not prime?
Enter a number: 30
2 3 5 7 11 13 17 19 23 29 sum_prime=129

*/
