#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main()
{
    char s[20];
    int x=0;
        string exp="122";
         for(int i=0;exp[i]!='\0';i++)
         {
              s[x]=exp[i];//s[]="122"
              x++;
         }

    int w=atoi(s);

    cout<< w+3;  //125




    return 0;
}
//convert string to array of char
//then char to int
