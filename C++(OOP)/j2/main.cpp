#include <iostream>
using namespace std;
int main()
{
    int x=25;
    int &y=x;
    y=32;
    cout<<"x="<<x<<endl;
    x=57;
    cout<<"y="<<y;
    return 0;
}
//call by reference
/*
x=32
y=57
*/
