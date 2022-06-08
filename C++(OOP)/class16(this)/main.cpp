#include <iostream>
using namespace std;
class stud
{
public:
    void address()
    {
        cout<<this;   //address of object
    }
};
int main()
{
    stud a,b,c;
    cout<<"The address of a:\t";
    a.address();
    cout<<"\n&a:\t\t\t"<<&a;
    cout<<"\nThe address of b:\t";
    b.address();
    cout<<"\n&b:\t\t\t"<<&b;
    cout<<"\nThe address of c:\t";
    c.address();
    cout<<"\n&c:\t\t\t"<<&c;
    return 0;
}
/*
The address of a:       0x6dfeef
&a:                     0x6dfeef
The address of b:       0x6dfeee
&b:                     0x6dfeee
The address of c:       0x6dfeed
&c:                     0x6dfeed
*/
