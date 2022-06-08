#include <iostream>
using namespace std;
class Tri;
class Rectangle
{
    int width,height;
public:
    void set_values(int a,int b)
    {
        width=a;
        height=b;
    }
    friend int sum(Tri T,Rectangle R);
};
class Tri
{
    int W,H;
public:
    Tri(int a,int b)
    {
        W=a;
        H=b;
    }
    friend int sum(Tri T,Rectangle R);
};
int sum(Tri T,Rectangle R)
{
    return T.W+R.width;
}
int main()                                                //sum of two width
{
    Rectangle r;
    r.set_values(2,3);
    Tri L(5,10);
    cout<<sum(L,r)<<endl; // 7
    return 0;
}
