#include <iostream>
using namespace std;

void f()
{
    static int x=0;  //variable X will be common for all functions
    x++;
    cout<<x<<endl;
}
int main()
{
    f();
    f();
    f();
    return 0;
}
/*
1
2
3

*/
