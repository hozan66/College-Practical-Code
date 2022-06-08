#include <iostream>
using namespace std;
class st
{
private:
    string name;
    int m1,m2;
public:
    st():m1(0),m2(0),name("unknown")
    {cout<<"constructor\n";}
    void SetData()
    {
        cout<<"enter name & M1 & M2\n";
        cin>>name>>m1>>m2;
    }
    float avg();
    void print()
    {
        cout<<name<<" "<<avg()<<endl;
    }
    ~st()
    {
        cout<<"End of object\n";
    }
};

float st::avg()
{
    return (m1+m2)/2.;
}
int main()
{
    st s;
    s.SetData();
    s.print();
    return 0;
}
/*
constructor
enter name & M1 & M2
hoz 88 99
hoz 93.5
End of object

*/
