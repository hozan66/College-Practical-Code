#include <iostream>
using namespace std;

class B;   //forward Declaration
class A
{
    int a,b;
public:
    friend void S1(A,B);
    void setData()
    {
        cout<<"Enter a & b: ";
        cin>>a>>b;
    }
    void print()
    {
     cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
    }
    int sum()
    {
        return a+b;
    }

};

class B
{
    int a,x;
public:
    friend void S1(A,B);
    void setData()
    {
        cout<<"Enter a & x: ";
        cin>>a>>x;
    }
    void print()
    {
     cout<<"a="<<a<<"\t"<<"x="<<x<<endl;
    }
    int sum()
    {
        return a+x;
    }

};

void S1(A a1,B b1)
{
    cout<<"sum of a a: "<<a1.a+b1.a<<endl;
    cout<<"sum of b x: "<<a1.b+b1.x<<endl;
}

void S2(A a1,B b1)
{
    cout<<"Total sum of both class A & B: "<<a1.sum()+b1.sum()<<endl;
}

int main()
{
   A x;
   B y;
   x.setData();
   y.setData();
   x.print();
    y.print();
   S1(x,y);
   S2(x,y);
    return 0;
}
/*
Enter a & b: 1 2
Enter a & x: 3 4
a=1     b=2
a=3     x=4
sum of a a: 4
sum of b x: 6
Total sum of both class A & B: 10

*/
