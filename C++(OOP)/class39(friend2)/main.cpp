#include <iostream>
using namespace std;
class Rectangle
{
    int width,height;
    friend Rectangle duplicate(Rectangle R);
public:
    void set_values(int,int);
    int area(void)
    {
        return (width*height);
    }
};

void Rectangle::set_values(int a,int b)  //member
{
    width=a;
    height=b;
}
Rectangle duplicate(Rectangle R)   //none member
{
    Rectangle T;
    T.width=R.width*2;
    T.height=R.height*2;
    return T;
}
int main()
{
    Rectangle rect,rectb;
    rect.set_values(2,3);
    cout<<"The area before duplicate="<<rect.area()<<endl;
    rectb=duplicate(rect);
    cout<<"The area after duplicate="<<rectb.area()<<endl;
    return 0;
}
/*
The area before duplicate=6
The area after duplicate=24

*/
