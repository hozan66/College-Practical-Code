#include <iostream>
using namespace std;

class sum
{
private:
    int  x=5,y=10;     //  initial value
public:
    void ser()
    {
        cout<<"Enter two numbers:";
        cin>>x>>y;
    }
    void print()
    {
        cout<<x<<"\t"<<y<<endl;;
    }
    sum()
    {
        cout<<"Empty Constructor\n";
    }
    sum(int a,int b);

};

sum::sum(int a,int b):x(a),y(b){cout<<"hozey\t";}


int main()
{
  sum s,ss(35,45);
  s.print();
  s.ser();
 s.print();
cout<<"________________"<<endl;
ss.print();
ss.ser();
ss.print();
cout<<"________________"<<endl;

    return 0;
}
/*
Empty Constructor
hozey   5       10
Enter two numbers:55 45
55      45
________________
35      45
Enter two numbers:77 33
77      33
________________

*/
