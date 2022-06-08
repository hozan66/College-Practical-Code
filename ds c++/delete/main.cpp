#include <iostream>

using namespace std;

int main()
{   int a=4;
    int *p=&a;



    cout<<&*p<<endl;
    cout << p<< endl;
    cout<<&a<<endl;
    cout<<&p<<endl;   // address of pointer
    return 0;
}
//delete
/*
0x6dfeec
0x6dfeec
0x6dfeec
0x6dfee8
*/
