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
    unary operator+=(unary ob)
    {
      x+=ob.x;
      y+=ob.y;
      return *this;
    }
};

int main()
{
    unary b(1,2),b2(3,3);
    b+=b2; //b= b.operator+=(ob2)
    /*
    b-=b2;        we must change operator as well
    b*=b2;
    b/=b2;
    b%=b2;
    */
    b.show();

    return 0;
}
/*
4       5

*/
