/*
int isalpha(character)
return----------->zero------->it is not alphabet
return----------->non zero------->it is alphabet

*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='+';
    int x=isdigit(ch);
    cout<<"x="<<x<<endl;
    if(isalpha(ch)==0)
        cout<<"It is not alphabet\n";
    else
        cout<<"It is alphabet\n";

    return 0;
}
/*
x=0
It is not alphabet
*/
