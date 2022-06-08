#include <iostream>
using namespace std;
void po(int x);
int main()
{
    int a,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cin>>a;
 po(a);
    }
    return 0;
}
void po(int x)
{
  if(x>0)
    cout<<"the number is positive"<<endl;
  else
     cout<<"the number is not positive"<<endl;
}
/*write c++ program to check whether an integer number positive or not by using function,
in the main program call the function n times.

4
5
the number is positive
0
the number is not positive
-2
the number is not positive
6
the number is positive
*/
