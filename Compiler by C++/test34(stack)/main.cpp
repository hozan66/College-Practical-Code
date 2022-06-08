#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str="Hello";
    stack<char> sta;
    for(int i=0;i<str.length();++i)
        sta.push(str[i]);

    for(int i=0;i<str.length();++i){
        cout<<sta.top();
        sta.pop();
    }
    return 0;
}
/*
olleH
*/
