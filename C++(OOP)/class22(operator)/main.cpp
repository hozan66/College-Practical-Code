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
    unary operator-()
    {
        x=-x;
        y=-y;
        return *this;
    }
};

int main()
{
    unary k(-1,2);
    -k;
     k.show();
    return 0;
}
/*
1       -2

*/
