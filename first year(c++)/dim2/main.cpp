#include <iostream>
using namespace std;
int main()
{
    int const row=3;
    int const col=3;
    int b[row][col],i,j;
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    cin>>b[i][j];
    cout<<endl;
    cout<<"matrix B"<<endl;
        for(j=0;j<col;j++)
        cout<<b[0][j]<<" ";
        cout<<endl;
    return 0;
}
/*
print first row of matrix B
1 2 3 4 5 6 7 8 9

matrix B
1 2 3
*/
