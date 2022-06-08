#include <iostream>
using namespace std;
class Distance
{
private:
    int feet,inches;
public:
    Distance()
    {
        feet=inches=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    friend istream&operator>>(istream&input,Distance&d);
    friend ostream&operator<<(ostream&output,Distance&d);

};
istream&operator>>(istream&input,Distance&d)  //none member because it's returning object of another class
{
    input>>d.feet>>d.inches;
    return input;
}
ostream&operator<<(ostream&output,Distance&d)
{
    output<<d.feet<<" "<<d.inches<<endl;
    return output;
}
int main()
{
    Distance D1(11,10),D2(5,11),D3;
    cout<<"Enter value of feet & inches: ";
    cin>>D3;

    cout<<D3;
    return 0;
}
/*
Enter value of feet & inches: 50 60
50 60

*/
