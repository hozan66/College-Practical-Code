#include <iostream>
using namespace std;
class CPolygon
{
protected:
    int width,height;
public:
    void set_values(int a,int b)
    {
        width=a;
        height=b;
    }
    virtual int area()
    {
        return (0);
    }
};

class CRectangle : public CPolygon
{
public:
    int area()
    {
        return (width*height);
    }
};

class CTriangle : public CPolygon
{
public:
    int area()
    {
        return (width*height/2);
    }
};

int main()
{
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;

    CPolygon *p1,*p2,*p3;  //here its polymorphism
    p1=&rect;
    p2=&trgl;
    p3=&poly;

    p1->set_values(4,5);
    p2->set_values(4,5);
    p3->set_values(4,5);

    cout<<p1->area()<<endl;
    cout<<p2->area()<<endl;
    cout<<p3->area()<<endl;
    return 0;
}
/*
20
10
0

*/
