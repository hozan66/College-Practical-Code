#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int i,x,y;
    x=time(0);      //time(NULL);
    for(i=0;i<10000;i++)
    {
        cout<<time(NULL)<<endl;
        y=time(0);
    }
        cout<<"Time token: "<<y-x<<" seconds"<<endl;
    return 0;
}
/*
1584101358
1584101358
Time token: 13 seconds
*/
