#include <iostream>
//#include <cstring>
using namespace std;

int main()
{
    string stringConcat="";
    string str="p2@r.o%g+ra;m";


    for(int i=0;i<str.length();i++)
        if(isalpha(str[i]))
        stringConcat+=str[i];

    cout<<"\nNew String: "<<stringConcat<<endl;


cout<<"--------------------------------------------------------\n";
stringConcat="";

    for(int i=0;i<str.length();i++)
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z'))
        stringConcat+=str[i];

   cout<<"\nNew String: "<<stringConcat<<endl;

    return 0;
}
/*
New String: program
--------------------------------------------------------

New String: program

*/
