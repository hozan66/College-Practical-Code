#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch1='b';
    char tc1=toupper(ch1);
    cout<<ch1<<"\t"<<tc1<<endl;

    char ch2='B';
    char tc2=toupper(ch2);
    cout<<ch2<<"\t"<<tc2<<endl;

    char ch3='@';
    char tc3=toupper(ch3);
    cout<<ch3<<"\t"<<tc3<<endl;

    return 0;
}
/*
b       B
B       B
@       @

*/
