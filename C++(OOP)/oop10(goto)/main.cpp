#include <iostream>
using namespace std;

int main()
{
   int a=0;

   Back:
    cout<<"a="<<a<<endl;
    a++;
    if(a<=5)
        goto Back;
    else
        cout<<"a is greater than 5\n";
    return 0;
}
/*
a=0
a=1
a=2
a=3
a=4
a=5
a is greater than 5
*/
