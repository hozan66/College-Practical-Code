#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;
int main()
{
    string str;
    int i,x=1;
    cout<<"Enter a string to check if it is Identifier or not: ";
    cin>>str;
    cout<<endl;

    if( isalpha(str[0]) || str[0]== '_' )
        {
            for(i=1;i<str.length();i++)
            {
                if( !( isalnum(str[i]) || str[i]== '_' ) )  //!( isdigit(str[i]) || isalpha(str[i]) )
                   {
                       x=0;
                       break;
                   }
            }
            if(x==1)
                cout<<"It is Identifier\n";
            else
                 cout<<"It is not Identifier\n";
        }
    else
        cout<<"It is not Identifier\n";

    return 0;
}
/*
Write a program to check the input if it is Identifier or not??
Enter a string to check if it is Identifier or not: dvd%4ehef

It is not Identifier

*/
