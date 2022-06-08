#include <iostream>
using namespace std;
class temp
{
    int Count;
    public:
        temp():Count(5){}
        void operator++() //prefix
        {
            Count+=5;
        }
        void operator++(int) //postfix
        {
            Count+=5;
        }
        void Display()
        {
            cout<<"Count="<<Count<<endl;
        }
};
int main()
{
    temp t;
    t++;  //  t.operator++(0)  //any integer number
    t.Display();
    ++t;   //   t.operator++()
    t.Display();
    return 0;
}
/*
Count=10
Count=15

*/
