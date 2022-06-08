#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int W,H;
    public:
        Rectangle():W(0),H(0)
        {
            cout<<"W="<<W<<" H="<<H<<endl;
        }
        Rectangle(int a, int b):W(0),H(0)
        {
            W=a;
            H=b;
            cout<<"A rectangle has been created\n";
            Rectangle ob;
        }
        ~Rectangle()
        {
            cout<<W<<" "<<H<<" A rectangle has been  deleted\n";
        }
};
int main()
{
    Rectangle R1(3,4),R2(5,6);
    Rectangle R3;


    return 0;
}
/*
A rectangle has been created
W=0 H=0
0 0 A rectangle has been  deleted
A rectangle has been created
W=0 H=0
0 0 A rectangle has been  deleted
W=0 H=0
0 0 A rectangle has been  deleted
5 6 A rectangle has been  deleted
3 4 A rectangle has been  deleted

*/
