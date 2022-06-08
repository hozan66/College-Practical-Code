#include <iostream>
using namespace std;
class mark
{
private:
    int m1,m2;
    public:
        mark(const mark&x);
        mark(int a,int b)
        {
            m1=a;
            m2=b;
            cout<<"m1="<<m1<<"\tm2="<<m2<<endl;
        }
};

mark::mark(const mark&x)
{
    m1=x.m1;
    m2=x.m2;
    cout<<"m1="<<m1<<"\tm2="<<m2<<endl;
}
int main()
{
    mark m(21,35);
    cout<<"---------------------------\n";
    mark w(m);
    cout<<"---------------------------\n";

    return 0;
}
/*
m1=21   m2=35
---------------------------
m1=21   m2=35
---------------------------

*/
