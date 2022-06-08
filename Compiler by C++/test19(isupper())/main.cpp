/*
int isupper(character)
return----------->zero------->it is not uppercase character
return----------->non zero------->it is uppercase character
*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='a';
    int x=isupper(ch);
    cout<<"x="<<x<<endl;
    if(isupper(ch)==0)
        cout<<"It is not uppercase character\n";
    else
        cout<<"It is uppercase character\n";

    return 0;
}
/*
x=0
It is not uppercase character

*/
