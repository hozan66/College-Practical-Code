/*
int isdigit(character)
return----------->zero------->it is not digit
return----------->non zero------->it is digit

*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='s';
    int x=isdigit(ch);
    cout<<"x="<<x<<endl;
    if(isdigit(ch)==0)
        cout<<"It is not digit\n";
    else
        cout<<"It is digit\n";

    return 0;
}
/*
x=0
It is not digit

*/
