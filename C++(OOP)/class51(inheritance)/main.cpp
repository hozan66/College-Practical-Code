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
};

class CRectangle : public CPolygon  //(here) this is inheritance
{
public:
   int area1()
   {
       return (width*height);
   }
};

class CTriangle : public CPolygon
{
public:
   int area2()
   {
       return (width*height/2);
   }
};

int main()
{
   CRectangle rect;  // width height&&set_values&&area1
   CTriangle trgl;   // width height&&set_values&&area2

   rect.set_values(4,5);
   trgl.set_values(4,5);

   cout<<rect.area1()<<endl;  //20
   cout<<trgl.area2()<<endl;  //10
}
/*
CPolygon::width   // protected access
CRectangle::width   // protected access
CPolygon::set_values()   // public access
CRectangle::set_values()   // public access
*/
