//C++ Strings and Pointers
// Create your own strlen function
#include <iostream>
using namespace std;
int myStrLen(char str[]);
int main()
{
    char s[15] = "Hello World";
    cout << myStrLen(s);  //11
return 0;
}
//--------------------------------------------------------------
/*
int myStrLen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
               i++;
    return i;
}
*/
//Or
int myStrLen(char *str)
{
    char *first = str;
    while (*str != '\0')
           str++;
    return str - first;
}
//Or
/*
int myStrLen(char *str)
{
    char *first = str;
    while (*str)
        str++;
    return str - first;
}
*/
