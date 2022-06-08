#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch1='A';
    char tc1=tolower(ch1);
    cout<<ch1<<"\t"<<tc1<<endl;

    char ch2='a';
    char tc2=tolower(ch2);
    cout<<ch2<<"\t"<<tc2<<endl;

    char ch3='@';
    char tc3=tolower(ch3);
    cout<<ch3<<"\t"<<tc3<<endl;

    return 0;
}
/*
A       a
a       a
@       @

*/
