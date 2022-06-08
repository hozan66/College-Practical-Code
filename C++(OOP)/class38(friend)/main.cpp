#include <iostream>
using namespace std;
class myclass
{
    int a,b;
public:
    myclass(int i,int j)
    {
        a=i;
        b=j;
    }
    friend int sum(myclass ob);
};
int sum(myclass ob) //none member
{
    return ob.a+ob.b;
}
int main()
{
    myclass o(10,20);
    cout<<sum(o)<<endl;  //30
    return 0;
}
