#include <iostream>
using namespace std;
class rect
{
private:
    int H,W;
public:
    void setData()
    {
        cout<<"Enter W & H\n";
        cin>>W>>H;
    }
    int area()
    {
        return W*H;
    }
    void print()
    {
        cout<<"W="<<W<<endl;
        cout<<"H="<<H<<endl<<endl;
    }

};
void price(rect B,int p) //   here we can only reach to public
{
    cout<<"the Total is:"<<B.area()*p<<"$"<<endl;
}
int main()
{
  rect R;
  R.setData();
  price(R,5);

    return 0;
}
/*
Enter W & H
3
4
the Total is:60$

*/
