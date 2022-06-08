#include <iostream>
using namespace std;
int sum(int x,int y)
{
    if(x==y)
   return x;
   else
    return y+sum(x,y-1);
}
int main()
{
    int a,b;
    cout<<"enter interval a & b for sum this interval\n";
    cin>>a>>b;
    cout << sum(a,b) << endl;
    return 0;
}
/*
enter interval a & b for sum this interval
2 6
20

*/
