#include <iostream>
using namespace std;
int x=15;   //global

int main()
{
    cout<<"x="<<x<<endl;
    x=20;                     //global
    cout<<"x="<<x<<endl;
    int x=24;                   //local
    cout<<"x="<<x<<endl;
    x=50;                          //local
    cout<<"x="<<x<<endl;
    cout<<"::x="<<::x<<endl;           //here with scope resolution  gives global
    return 0;
}
/*
x=15
x=20
x=24
x=50
::x=20

*/
