#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int i,j,n,x=1;
    cout<<"Enter a string to check if it is Palindrome or not: ";
    cin>>str;
    cout<<endl;

    j=str.length()-1;
    n=(str.length()-1)/2;
     for(i=0;i<n;i++)
        {
            if( str[i] != str[j] )
                {
                    x=0;
                    break;
                }
            j--;
        }
        if(x==1)
            cout<<"It is Palindrome\n";
        else
             cout<<"It is not Palindrome\n";
    return 0;
}
/*
Write a program to input the string that to check if it is palindrome or not??

Enter a string to check if it is Palindrome or not: level

It is Palindrome

*/
