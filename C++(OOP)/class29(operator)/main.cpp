#include <iostream>
using namespace std;
class temp
{
    int Count;
    public:
        temp():Count(0){}
        void operator++() //prefix
        {
            Count+=5;
        }
        void operator++(int) //postfix
        {
            Count+=5;
            if(Count>100)  //print until reach 100 then back to zero
                Count=0;
        }
        void Display()
        {
            cout<<"Count="<<Count<<endl;
        }
};
int main()
{
    temp t;
    for(int i=0;i<50;i++)
    {
       t++;
    t.Display();
    }

    return 0;
}
/*
Count=5
Count=10
Count=15
Count=20
Count=25
Count=30
Count=35
Count=40
Count=45
Count=50
Count=55
Count=60
Count=65
Count=70
Count=75
Count=80
Count=85
Count=90
Count=95
Count=100
Count=0
Count=5
Count=10
Count=15
Count=20
Count=25
Count=30
Count=35
Count=40
Count=45
Count=50
Count=55
Count=60
Count=65
Count=70
Count=75
Count=80
Count=85
Count=90
Count=95
Count=100
Count=0
Count=5
Count=10
Count=15
Count=20
Count=25
Count=30
Count=35
Count=40

*/
