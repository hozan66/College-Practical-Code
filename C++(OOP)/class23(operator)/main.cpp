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
    bool operator!()
    {
        /*
        if(x==0&&y==0)
            return true;
        else
            return false;
            */
            return (x==0&&y==0);
    }
};

int main()
{
    unary x(1,1);
    if(!x)
        cout<<"True\n";
    else
        cout<<"False\n";
        x.show();
    return 0;
}
/*
False

*/
