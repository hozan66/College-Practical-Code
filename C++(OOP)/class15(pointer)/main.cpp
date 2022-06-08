#include <iostream>
using namespace std;
class rect
{
private:
    int *width,*height;
    public:
        rect(int a,int b); //constructor
        ~rect(); //destructor
        int area()
        {
            return (*width * *height);
        }

};
rect::rect(int a,int b)
{
    width=new int;
    height=new int;
    *width=a;
    *height=b;
}
rect::~rect()
{
    delete width;
    delete height;
}
int main()
{
    rect ob1(3,4),ob2(5,6);
    cout<<"area of ob1: "<<ob1.area()<<endl;
    cout<<"area of ob2: "<<ob2.area()<<endl;
    return 0;
}
/*
area of ob1: 12
area of ob2: 30
*/
