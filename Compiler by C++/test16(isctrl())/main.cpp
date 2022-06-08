/*
int iscntrl(character)
Example--------------> \a \n \t
return----------->zero------->it is not control character
return----------->non zero------->it is control character

*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='\t';
    int x=iscntrl(ch);
    cout<<"x="<<x<<endl;
    if(iscntrl(ch)==0)
        cout<<"It is not control character\n";
    else
        cout<<"It is control character\n";

    return 0;
}
/*
x=32
It is control character

*/
