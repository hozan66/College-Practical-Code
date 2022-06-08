//CPolygon class is Abstract class
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
    virtual int area(void)=0; //pure virtual class
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
    //CPolygon poly;//error because CPolygon is abstract class

    CPolygon *p1,*p2;  //here its polymorphism
    p1=&rect;
    p2=&trgl;

    p1->set_values(4,5);
    p2->set_values(4,5);

    cout<<p1->area()<<endl;
    cout<<p2->area()<<endl;
    return 0;
}
/*
20
10

*/
