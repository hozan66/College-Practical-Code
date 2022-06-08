// create your own strcpy function
#include <iostream>
using namespace std;
void myStrcpy(char str2[], char str1[]);
int main()
{
    char s1[15] = "Hello World";
    char s2[30];
    myStrcpy(s2, s1);
    cout << s2;   //Hello World
    return 0;
}
//--------------------------------------------------------------
/*
void myStrcpy(char *to, char * from)
{
    while (*to = *from)
    {
        to++;
        from++;
    }
}
*/
//Or
void myStrcpy(char *to, char * from)
{
    while (*to++ = *from++); //execute one line
}
