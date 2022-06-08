/*
int islower(character)
return----------->zero------->it is not lowercase character
return----------->non zero------->it is lowercase character
*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='A';
    int x=islower(ch);
    cout<<"x="<<x<<endl;
    if(islower(ch)==0)
        cout<<"It is not lowercase character\n";
    else
        cout<<"It is lowercase character\n";

    return 0;
}
/*
x=0
It is not lowercase character

*/
