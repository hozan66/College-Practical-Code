#include <iostream>
using namespace std;
float ar(float x);
int main()
{
    float y,z;
 cout<<"input the value of rib to find the area of square"<<endl;
    cin>>y;
    cout<<endl;
    z=ar(y);
    cout<<"area="<<z<<endl;
    return 0;
}
float ar(float x)
{
    float area;
    area=x*x;
    return (area);
}
/*write c++ program to find the area of the square shape by using function
input the value of rib to find the area of square
4
4

area=16

*/
