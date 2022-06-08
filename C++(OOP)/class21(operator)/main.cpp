#include <iostream>
using namespace std;
class unary
{
    int x,y;
public:
    unary(int i=0,int j=0)
    {
        x=i;
        y=j;
    }
    void show()
    {
        cout<<x<<"\t"<<y<<endl;
    }
    unary operator++()  //prefix  //return object
    {
        x++;
        y++;
        return *this;
    }
     unary operator++(int)  //postfix
    {
        unary t;
        t=*this;
        x++;
        y++;
        return t;
    }
};

int main()
{
    unary v(10,20),k;
    v++;  // 11   21
    k=v++;   // 11   21
    k.show();  // 11   21
    v.show();  // 12   22

    return 0;
}
/*
11      21
12      22

*/
