/*
Write a program to count the digit from the input string??
*/
#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;
int main()
{
    string str;
    int i,Count=0;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<endl;

    for(i=0;i<str.length();i++)
        {
            if(isdigit(str[i]))
                Count++;
        }
    cout<<"Number of digits in string: "<<Count<<endl;
    return 0;
}
/*
Enter a string: Hello 2020 But I miss 2019

Number of digits in string: 8

*/
