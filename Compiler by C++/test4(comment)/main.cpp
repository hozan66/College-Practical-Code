/*
Write a program to identify comment
1- // for single line comment
2- /*double/ for multi lines comment
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int i,flag=0;
    cout<<"Enter your comment to check if it's single line or multiLines: ";
    getline(cin,str,'$'); //input multi lines terminate a string with $ sign
    cout<<endl<<endl;

    for(i=0;i<str.length();i++)
    {
        if(str[i]=='/' && str[i+1]=='/')
            {
                flag=1;
                break;
            }
        else if(str[0]=='/' && str[1]=='*' && str[i]=='*' && str[i+1]=='/' )
            {
                flag=2;
                break;
            }
    }
    if(flag==1)
        cout<<"this is for single line comment \n";
    else if(flag==2)
        cout<<"this is for multi lines comment \n";
    else
        cout<<"this is not comment \n";
    return 0;
}
/*
Enter your comment to check if it's single line or multiLines: /*
Computer
Science
Student
star/$


this is for multi lines comment

*/
