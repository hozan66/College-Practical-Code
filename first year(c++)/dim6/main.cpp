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

        for(i=0;i<row;i++)
            {
        for(j=0;j<col;j++)
            if(i==j)
        cout<<b[i][j]<<" ";
        else{b[i][j]=0;
            cout<<b[i][j]<<" ";}
        cout<<endl;
        }
    return 0;
}
/*print , let matrix B be diagonal
1 2 3
4 5 6
7 8 9

matrix B
1 0 0
0 5 0
0 0 9

*/
