//copy constructor:copy_constructor that allows copying one object to another
#include <iostream>
using namespace std;
class Copy
{
private:
    int a1,a2,a3,a4,a5,a6,a7,a8;
public:
    Copy(int aa1,int aa2,int aa3,int aa4,int aa5,int aa6,int aa7,int aa8)
    {
        a1=aa1;
        a2=aa2;
        a3=aa3;
        a4=aa4;
        a5=aa5;
        a6=aa6;
        a7=aa7;
        a8=aa8;
    }
    Copy(const Copy &a) //تم  اختصار
    {
        a1=a.a1;        //argument  كاملة
        a2=a.a2;
        a3=a.a3;
        a4=a.a4;
        a5=a.a5;
        a6=a.a6;
        a7=a.a7;
        a8=a.a8;
    }
    void print()
    {
        cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<" "<<a7<<" "<<a8<<"\n";
    }
};

int main()
{
    Copy ob1(11,22,33,44,55,66,77,88);
    ob1.print();
    Copy ob2(ob1);
    ob2.print();
    return 0;
}
/*
11 22 33 44 55 66 77 88
11 22 33 44 55 66 77 88

*/
