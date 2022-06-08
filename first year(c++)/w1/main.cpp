#include <iostream>
using namespace std;
int main()
{
    int a=2,b=-1,c=3,d=c+4,e=c++;
    a=a+b;
    d=++a*e++;
    b=b+d;
    d=d%3;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<d<<endl<<e<<endl;
    return 0;
}
/*find the output??
2
5
4
0
4
*/
