//program for postfix
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str,str2="";
    int n,i;
    cout<<"Enter a string: ";
    cin>>str;

    n=str.length();
    for(i=n-1;i>=0;i--)
        {
            str2=str[i]+str2;
            cout<<str2<<endl;
        }
    return 0;
}
/*
Enter a string: compiler
r
er
ler
iler
piler
mpiler
ompiler
compiler

*/
