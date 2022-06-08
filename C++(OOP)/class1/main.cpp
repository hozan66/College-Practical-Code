#include <iostream>
using namespace std;
class triangle
{
private:
    int base,height;

public:
         triangle(int a,int b)
        {
            cout<<"Second Constructor\n";
            base=a;
            height=b;
        }
        triangle()
        {
            cout<<"First Constructor\n";
            base=0;
            height=0;
        }
        void set_Heighgt_base(int b,int h)
        {
            base=b;
            height=h;
        }
        float area()
        {
            return 0.5*base*height;
        }
        void print()
        {
            cout<<"base="<<base<<endl;
            cout<<"height="<<height<<endl;
            cout<<"area="<<area()<<endl<<endl;
        }
};

int main()
{
    triangle ob1(10,10),ob2;
    ob1.print();
    ob2.print();
    ob2.set_Heighgt_base(4,4);
    ob2.print();
    return 0;
}
/*
Second Constructor
First Constructor
base=10
height=10
area=50

base=0
height=0
area=0

base=4
height=4
area=8

*/
