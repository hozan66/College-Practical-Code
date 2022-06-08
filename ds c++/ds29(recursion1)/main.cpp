#include <iostream>
using namespace std;

void f(int n)
{
  if(n==0)
        return; //stop
  else
  {
      f(n-1);
      cout<<n<<" ";
  }
}

int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;
    f(n);
    return 0;
}
/*using recursion ??print 1 2 3 .......n
Enter a Number
9
1 2 3 4 5 6 7 8 9
*/
