#include <iostream>
using namespace std;
int main()
{
  int  a=6, b=8;
    if((b%a==2)&&(b!=a%b))
        a++;
    else
        a--;
    if(b+a<=b+3-4)
        b*=a;
    else
        b+=a;
    a+=b;
    cout<<a<<endl<<b<<endl;
    return 0;
}
/*
22
15
*/
