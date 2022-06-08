#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char msg[]="Hello";
    char* ptr=msg;
    *ptr='M';
    ptr++;
    *ptr='E';
    ptr+=2;
    *ptr='Z';
    cout<<"New msg: "<<msg<<endl;  //MElZo

    for(int i=0;i<strlen(msg);i++)
        cout<<*(msg+i)<<endl;

    char* chr="hozan"; //char chr[]="hozan";
    cout<<chr;
    return 0;
}
/*
New msg: MElZo
M
E
l
Z
o
hozan

*/
