#include <iostream>
using namespace std;
class number
{
    int Num;
public:
    number()
    {
        Num=0;
    }
    number(int x)
    {
        Num=x;
    }
    number(const number &ob)   // copy constructor
    {
        Num=ob.Num;
    }
    int getNum()
    {
        return Num;
    }
    operator int()
    {
        return int(Num);
    }
};
int main()
{
    number ob(20);
    int x=10;
    x=ob;
    cout<<"x="<<x<<endl;  // x=20
    return 0;
}
