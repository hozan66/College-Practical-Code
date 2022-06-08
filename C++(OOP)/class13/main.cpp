#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x=100;
    int y=200;     // after setw it must have something like X in order to work
    cout<<setfill('*')<<setw(7)<<x<<setfill('+')<<setw(7)<<y<<endl;
    cout<<endl;

    cout<<setfill('$')<<setw(7)<<""<<endl;
    return 0;
}
/*
****100++++200

$$$$$$$

*/
