#include <iostream>
using namespace std;

int main()
{
    char g1[10];
    char g2[10];
    char g3[10];
    cin.getline(g1,10);
    cin.getline(g2,10);
    cin.getline(g3,10,'$'); // we put any char $ for stop reading

    cout<<g1<<endl;
    cout<<g2<<endl;
    cout<<g3<<endl;
    return 0;
}
/*
aaaaaa
bbbbbb
cc$cefef
aaaaaa
bbbbbb
cc

*/
