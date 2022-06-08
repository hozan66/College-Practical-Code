#include <iostream>
using namespace std;
class rect
{
    private:
int W,L,A;
    public:

        void setdata();
        void printdata();
        void area();
};
void rect::setdata()
{
    cout<<"Enter Width and Length:";
    cin>>W>>L;
}

void rect::printdata()
{
   cout<<"Area="<<A<<endl;
}
void rect::area()
{
     A=W*L;
}
int main()
{
    rect s;
    s.setdata();
    s.area();
     s.printdata();
    return 0;
}
/*
Enter Width and Length:4 5
Area=20

*/
