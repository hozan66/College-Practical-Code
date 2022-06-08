#include <iostream>
#include <cstring>
using namespace std;

int main()         //those functions used for array of characters only
{
    char s1[]="hozan";
    char s2[]="hamdin";
    char s3[20];

    strcpy(s3,s1);
    cout<<"s3="<<s3<<endl;

    strcat(s3,s2);
    cout<<"strcat(s1,s2): "<<s3<<endl;

    cout<<"strlen(s3): "<<strlen(s3)<<endl;
    cout<<"s3="<<s3<<endl;

    cout<<"strcmp(s1,s2): "<<strcmp(s1,s2)<<endl;
    cout<<"strcmp(s2,s1): "<<strcmp(s2,s1)<<endl;
    cout<<"strcmp(s3,s3): "<<strcmp(s3,s3)<<endl;

    cout<<"----------------------------------------------------------\n";
    cout<<"strchr(s3,'z'): "<<strchr(s3,'z')<<endl;

    cout<<"strstr(s3,am): "<<strstr(s3,"am")<<endl;

    return 0;
}
/*
s3=hozan
strcat(s1,s2): hozanhamdin
strlen(s3): 11
s3=hozanhamdin
strcmp(s1,s2): 1
strcmp(s2,s1): -1
strcmp(s3,s3): 0
----------------------------------------------------------
strchr(s3,'z'): zanhamdin
strstr(s3,am): amdin

*/
