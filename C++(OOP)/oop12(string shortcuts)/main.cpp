#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char g1[10]="c++vsjava";
    char g2[10];
    strcpy(g2,g1);  //string copy
    cout<<g2<<endl;     //c++vsjava
    cout<<endl;

    char a1[10]="good";
    char a2[10]=" morning";
    cout<<strcat(a1,a2)<<endl;  //good morning  //string concatenate
    cout<<endl;

    char b[]="hozan";
    cout<<strlen(b)<<endl;  //5
    cout<<endl;

    char d1[]="A";
    char d2[]="B";
    cout<<strcmp(d1,d2)<<endl; //-1  //string compare
    char d3[]="A";
    char d4[]="A";
    cout<<strcmp(d3,d4)<<endl;  //0
    char d5[]="B";
    char d6[]="A";
    cout<<strcmp(d5,d6)<<endl;  //1
    return 0;
}
/*
c++vsjava

good morning

5

-1
0
1

*/
