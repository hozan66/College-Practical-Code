#include <iostream>

using namespace std;

int main()
{
    int *p;
    p=new int;  //new is address
    *p=10;
    cout<<p<<endl;
    cout<<*p<<endl;
    delete p;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}
/*
0xbf10d0
10
0xbf10d0
10
*/
