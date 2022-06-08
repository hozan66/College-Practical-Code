#include <iostream>
#include <windows.h>
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
    friend void price(rect,int);  //to reach to private variable
};
void price(rect B,int p)
{
    cout<<"the area is:"<<B.W*B.H<<endl;
    cout<<"the cost is:"<<B.W*B.H*p<<"$"<<endl;
}
int main()
{
  rect x[10];
  for(int i=0;i<10;i++)
  {
      x[i].setData();
      price(x[i],5);
      system("pause");  // it will stop until you Press any key to continue . . .
      system("cls");
  }

    return 0;
}
/*
Enter W & H
2
5
the area is:10
the cost is:50$
Press any key to continue . . .
*/
