/*
int isspace(character)
return----------->zero------->it is not space character
return----------->non zero------->it is space character
Example--------> \n \t \v \f or space or white space
*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='\f';
    int x=isspace(ch);
    cout<<"x="<<x<<endl;
    if(isspace(ch)==0)
        cout<<"It is not space character\n";
    else
        cout<<"It is space character\n";


        cout<<"hello \v world"<<endl;
        cout<<"hello \f world"<<endl;

    return 0;
}
/*
x=8
It is space character
hello  world
hello  world

*/
