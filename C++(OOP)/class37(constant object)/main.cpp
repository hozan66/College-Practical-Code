#include <iostream>
using namespace std;
class time
{
private:
    int h,m,s;
public:
    void print()  const   //constant function
    {
        cout<<"The Time="<<h<<":"<<m<<s<<endl;
    }
    time(int i,int j,int k)     //parameterize constructor
    {
        h=i;
        m=j;
        s=k;
    }
};
int main()
{
    const time noon(12,0,0);       //constant object
    noon.print();

    time m(7,3,0);
    m.print();
    return 0;
}
/*
The Time=12:00
The Time=7:30

*/
