#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a=15;
    cout<<hex<<a<<endl;
    cout<<oct<<a<<endl;

    char name[10]="hoz";
    char n[10];
    strcpy(n,name);
    cout<<n;
    return 0;
}
/*
f
17

*/
