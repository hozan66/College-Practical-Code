#include <iostream>
using namespace std;
void f(int n)
{
    if(n==0)
      return; //stop
    else
    {f(n/10);
        cout<<n%10<<endl;}
}
int main()
{
    f(1357);
    return 0;
}
/*
1
3
5
7
*/
