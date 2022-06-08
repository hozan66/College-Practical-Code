#include <iostream>
using namespace std;
class binary
{
    int x,y;
public:
    binary(int a=0,int b=0)
    {
        x=a;
        y=b;
    }
    binary operator+(binary c2)
    {
        binary c3;
        c3.x=x+c2.x;
        c3.y=y+c2.y;
        return c3;
    }
    binary operator+(int n)
    {
        binary c3;
        c3.x=x+n;
        c3.y=y+n;
        return c3;
    }
    void print()
    {
        cout<<x<<" , "<<y<<endl;
    }

   friend binary operator+(int n,binary c1);
};
binary operator+(int n,binary c1)
    {
        binary c3;
        c3.x=c1.x+n;
        c3.y=c1.y+n;
        return c3;
    }
int main()
{
    binary c1(3,1),c2(1,2),c3;
    c3=c1+c2;   //  c3=c1.operator+(c2);
    c3.print();

    c3=c1+10;  //  c3=c1.operator+(10);
    c3.print();

    c3=10+c1;   // c3=operator+(10,c1); //here we not call it by object
    c3.print();
    return 0;
}
/*
4 , 3
13 , 11
13 , 11

*/
