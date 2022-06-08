#include <iostream>
using namespace std;

class mark
{
    private:
    int m1,m2;
    public:
        void SetData()
        {
            cout<<"Enter Mark1 & Mark2\n";
            cin>>m1>>m2;
        }
        float avg()
        {
            return (m1+m2)/2.;
        }
        void print()
        {
            cout<<"M1="<<m1<<"\tM2="<<m2<<endl;
        }
};

class name
{
private:
    string nam;
        mark m;//in order to stay privacy
public:
    void SetData()
    {
        cout<<"Enter Name: ";
        cin>>nam;
        m.SetData();
    }
    void print()
    {
        cout<<"Name:"<<nam<<"\tAvg="<<m.avg()<<endl;
    }
    void print_mark()
    {
        m.print();
    }
};

int main()
{
    name x;
    x.SetData();
    x.print_mark();
    x.print();
    return 0;
}
/*
Enter Name: hozey
Enter Mark1 & Mark2
96 75
M1=96   M2=75
Name:hozey      Avg=85.5

*/
