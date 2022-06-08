/*
int isdigit(character)   and int isalpha(character)
int isalnum(character)
return----------->zero------->it is not alphanumeric
return----------->non zero------->it is alphanumeric

*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='9';
    int x=isalnum(ch);
    cout<<"x="<<x<<endl;
    if(isalnum(ch)==0)
        cout<<"It is not alphanumeric\n";
    else
        cout<<"It is alphanumeric\n";

    return 0;
}
/*
x=4
It is alphanumeric

*/
