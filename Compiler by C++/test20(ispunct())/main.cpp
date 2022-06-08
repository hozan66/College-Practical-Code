/*
int ispunct(character)
return----------->zero------->it is not punctuation character
return----------->non zero------->it is punctuation character
Example----> ? . , : ! ; - ' " / ()
*/
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch='!';
    int x=ispunct(ch);
    cout<<"x="<<x<<endl;
    if(ispunct(ch)==0)
        cout<<"It is not punctuation character\n";
    else
        cout<<"It is punctuation character\n";

    return 0;
}
/*
x=16
It is punctuation character

*/
