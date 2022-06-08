#include <iostream>
using namespace std;
float av(int v1,int v2);
int main()
{
    int x,y;
    float average;
    cin>>x>>y;
 cout<<endl;
 average=av(x,y);
 cout<<"average="<<average<<endl;
    return 0;
}
float av(int v1,int v2)
{
    float mean;
    mean=(v1+v2)/2.;
    return (mean);
}
/*write c++ program to find the average of two integer numbers by using function
9
3

average=6

*/
