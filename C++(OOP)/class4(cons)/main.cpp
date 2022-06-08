#include <iostream>
using namespace std;
class sum
{
private:
    int x,y;
    public:
        void sett()
        {
            cout<<"input x & y\n";
            cin>>x>>y;
        }
        void print()
        {
           int z;
            z=x+y;
            cout<<"sum="<<z<<endl;
        }
        sum(int a,int b);  // we can just give default argument in one place

};

 sum::sum(int a=5,int b=10):x(a),y(b)   //x=a,y=b
 {
     cout<<"has been initialized\n";
 }

int main()
{
    cout<<"Hello\n";
sum s,ss(35,45);
s.print();
cout<<"......................................\n";
ss.print();
sum sss;
    return 0;
}
/*
Hello
has been initialized
has been initialized
sum=15
......................................
sum=80
has been initialized

*/
