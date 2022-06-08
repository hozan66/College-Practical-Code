#include <iostream>
using namespace std;
int main()
{
char ch;
  int i,x,m;
  do
  {
      m=0;
      cout<<"enter a number\n";
      cin>>x;
      for(i=1;i<=x;i++)
      {
          if(x%i==0)
        m++;
      }


      if(m==2)
        cout<<x<<" is a prime\n";
      else
        cout<<x<<" is not a prime\n";

      cout<<"Do you what to check another number if it is prime?? (Y/N)\n";
    cin>>ch;
  }while(ch=='y'||ch=='Y');

    return 0;
}
/*check numbers if is it prime or not
enter a number
3
3 is a prime
Do you what to check another number if it is prime?? (Y/N)
y
enter a number
2
2 is a prime
Do you what to check another number if it is prime?? (Y/N)
y
enter a number
6
6 is not a prime
Do you what to check another number if it is prime?? (Y/N)
y
enter a number
15
15 is not a prime
Do you what to check another number if it is prime?? (Y/N)
y
enter a number
7
7 is a prime
Do you what to check another number if it is prime?? (Y/N)
n


*/
