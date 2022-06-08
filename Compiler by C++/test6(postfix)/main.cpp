//program for postfix
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int n,i,j;
    cout<<"Enter a string: ";
    cin>>str;

    n=str.length();
    for(i=0;i<n;i++)
        {
            for(j=i;j>=0;j--)
                cout<<str[n-1-j];
            cout<<endl;
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
