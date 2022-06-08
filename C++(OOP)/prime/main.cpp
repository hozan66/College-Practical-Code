#include <iostream>
using namespace std;
int main()
{
int i,n,x=1;
  cout<<"Enter the Number to check if is it Prime: ";
  cin>>n;
  for(i=2;i<n;i++)
  {
      if(n%i!=0)
         continue;
      else
        x=0;
  }

  if (x==0)
      cout<<"Number is not Prime."<<endl;
      else
       cout<<"Number is Prime."<<endl;
    return 0;
}
/* find prime numbers
*/
