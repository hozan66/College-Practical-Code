#include <iostream>
using namespace std;
int fun(int &x);            // call by reference
int main()
{
    int num=3;
    cout<<fun(num)<<endl;
    cout<<num<<endl;


    return 0;
}

int fun(int &x){
x++;
return x;

}
/*
4
4

*/
