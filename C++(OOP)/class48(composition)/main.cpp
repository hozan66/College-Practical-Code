#include <iostream>
using namespace std;
class properties
    {
    private:
        int color;
        int line;
    public:
        properties(int,int); //constructor
        void print()
        {
            cout<<"color="<<color<<"   line="<<line<<endl;
        }
    };
    properties::properties(int c,int l)
    {
        color=c;
        line=l;
    }
    class rectangle
    {
    private:
        float height,width;
        int xpos,ypos;
        properties pr;   //another object
    public:
        rectangle(float,float,int,int); //constructor
        void print()
        {
            cout<<"height="<<height<<"   width="<<width<<endl;
            cout<<"xpos="<<xpos<<"   ypos="<<ypos<<endl;
        }
    };
    rectangle::rectangle(float h,float w,int c,int l):pr(c,l)
    {
        height=h;
        width=w;
        xpos=0;
        ypos=0;
    }
int main()
{
     properties ob(11,22);
    ob.print();

    rectangle rc(3.0,2.0,1,3);
    rc.print();

    return 0;
}
/*
color=11   line=22
height=3   width=2
xpos=0   ypos=0
*/
