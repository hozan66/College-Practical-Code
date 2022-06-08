#include <iostream>
using namespace std;
class square;
class Rectangle
{
    int width,height;
public:
    int area(void)
    {
        return (width*height);
    }
    void convert(square);
};
class square
{
    int side;
public:
    int set_side(int x)
    {
        side=x;
    }
    friend class Rectangle;
};
void Rectangle::convert(square a)
{
    width=a.side;
    height=a.side;
}
int main()
{
    square sqr;
    Rectangle rect;
    sqr.set_side(4);
    rect.convert(sqr);
    cout<<"area="<<rect.area()<<endl;   //area=16
    return 0;
}
