#include <iostream>
using namespace std;
class Complex
{
    int r,v;
public:
    void Set()
    {
        cout<<"Enter value R &  V:\n";
        cin>>r>>v;
    }
    void print()
    {
        cout<<r<<"+"<<v<<"i"<<endl;
    }
    Complex operator+(Complex o)
    {
        Complex n;
        n.r=r+o.r;
        n.v=v+o.v;
        return n;
    }
};
int main()
{
   Complex a,b,c;
   a.Set();
   b.Set();
   c=a+b;  //c= a.operator+(b);
   c.print();
    return 0;
}
/*
Enter value R &  V:
4 3
Enter value R &  V:
5 4
9+7i
*/
