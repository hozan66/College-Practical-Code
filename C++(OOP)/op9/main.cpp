#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for(k=1;k<=5;k++)
            cout<<"\t"<<k<<"\t";
            cout<<endl<<endl;

    for(i=1;i<=5;i++)
    {

        cout<<i<<":     ";

        for(j=1;j<=5;j++)
        {
          cout<<"\t"<<j*i<<"\t";
        }

    cout<<endl;

    }

    return 0;
}
/*
        1               2               3               4               5

1:      1               2               3               4               5
2:      2               4               6               8               10
3:      3               6               9               12              15
4:      4               8               12              16              20
5:      5               10              15              20              25
*/
