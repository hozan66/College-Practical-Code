#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int i,x=1;
    cout<<"Enter a string to check if it is Identifier or not: ";
    cin>>str;
    cout<<endl;

    if( (str[0]>='A'&&str[0]<='Z') || (str[0]>='a'&&str[0]<='z') || str[0]== '_')
        {
            for(i=1;i<str.length();i++)
            {
                if( !( (str[i]>='A'&&str[i]<='Z') || (str[i]>='a'&&str[i]<='z') || (str[i]>='0'&&str[i]<='9') || str[i]== '_') )
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
