#include <iostream>
using namespace std;

int pow(int x,int y)
{
  if(y==0)
        return 1;
      //  else if(y==1)
      //      return x;
  else
       return x*pow(x,y-1);
}

int main()
{
    int x,y;
    cout << "Enter base & power" << endl;
    cin>>x>>y;
    cout<<pow(x,y);
    return 0;
}
/*using recursion ??find X^y
Enter base & power
2 4
16
*/
