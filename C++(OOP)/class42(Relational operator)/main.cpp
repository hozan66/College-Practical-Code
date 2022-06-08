#include <iostream>
using namespace std;
class Relational
{
    int x,y,z;
public:
    Relational()
    {
        x=y=z=0;
    }
    Relational(int i,int j,int k)
    {
        x=i;
        y=j;
        z=k;
    }
    int operator==(Relational b)  //we can use bool as well  //same for  < > <= >= == !=
    {
        if(x==b.x&&y==b.y&&z==b.z)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Relational a(10,10,10),b(10,10,10);
    if(a==b)  //  if( a.operator==(b) )
        cout<<"The two objects are equal\n";
        else
    cout<<"The two objects are not equal\n";
    return 0;
}
/*
The two objects are equal

*/
