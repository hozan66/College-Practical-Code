#include <iostream>
using namespace std;
void sum(int a,int b, int &c)
{
    c=a+b;

}
int main()
{
    int x;
    sum(10,20,x);
    cout<<x; // 30

    return 0;
}
