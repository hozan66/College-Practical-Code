//program for prefix
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
    for(i=0;i<n;i++)
        {
            str2=str2+str[i];
            cout<<str2<<endl;
        }
    return 0;
}
/*
Enter a string: compiler
c
co
com
comp
compi
compil
compile
compiler

*/
