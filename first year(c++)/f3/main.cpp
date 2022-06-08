#include <iostream>
using namespace std;
void sw(int &x,int &y);
int main()
{
    int x,y;
    cout<<"input two numbers"<<endl;
 cin>>x>>y;
 cout<<endl<<"before swap"<<endl;
cout<<"x="<<x<<" "<<"y="<<y<<endl;

 sw(x,y);
 cout<<"after swap"<<endl;
 cout<<"x="<<x<<" "<<"y="<<y<<endl;
    return 0;
}
void sw(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

/*write c++ program to swap two integer values by using function
input two numbers
54
69

before swap
x=54 y=69
after swap
x=69 y=54

*/
