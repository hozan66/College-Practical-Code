#include <iostream>
using namespace std;
string da[7]={"sat","sun","mon","tue","wed","thu","fri"};
enum days {sat=1,sun,mon,tue,wed,thu,fri};
class week
{
    days d[7];
    public:
        void setday(days w[])
        {
            for(int i=0;i<7;i++)
                d[i]=w[i];
        }
        void print()
        {
           for(int i=0;i<7;i++)
                cout<<"Number of day "<<da[i]<<" = "<<d[i]<<endl;
        }
};
int main()
{
    days d[7]={sat,sun,mon,tue,wed,thu,fri};

    week g;
    g.setday(d);
    g.print();
    return 0;
}
/*
Number of day sat = 1
Number of day sun = 2
Number of day mon = 3
Number of day tue = 4
Number of day wed = 5
Number of day thu = 6
Number of day fri = 7

*/
