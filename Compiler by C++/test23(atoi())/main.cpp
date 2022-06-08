/*
alpha to integer
atoi(string)   Converts an ASCII string to an integer
(#include <stdlib.h>)
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    string st="123";
    int num=atoi(st.c_str());
    cout<<num+1<<endl;

    return 0;
}
/*
124

*/
