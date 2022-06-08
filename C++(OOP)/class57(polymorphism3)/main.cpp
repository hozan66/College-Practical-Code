#include <iostream>
using namespace std;
class Polygon
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
    void printarea(void) //polymorphism
    {
       cout<<this->area()<<endl;
    }
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return (width*height);
    }
};

class Triangle : public Polygon
{
public:
    int area()
    {
        return (width*height/2);
    }
};

int main()
{
    Rectangle rect;
    Triangle trgl;

    Polygon *p1=&rect; //early binding(do not need run time)
    Polygon *p2=&trgl; //early binding(do not need run time)

    p1->set_values(4,5);
    p2->set_values(4,5);

    p1->printarea(); //20
    p2->printarea(); //10
    cout<<endl<<endl;

    Polygon *p[2]={&rect,&trgl};
    for(int i=0;i<2;i++)
    {
        cout<<p[i]->area()<<endl;       //late binding(need run time)
        p[i]->printarea();              //late binding(need run time)
    }
    return 0;
}
/*
20
10


20
20
10
10

*/
