/*
alpha to float
atoi(string)   Converts an ASCII string to an float
(#include <stdlib.h>)
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    string st="123.6";
    float num=atof(st.c_str());
    cout<<num+1.1<<endl;

    return 0;
}
/*
124.7

*/
