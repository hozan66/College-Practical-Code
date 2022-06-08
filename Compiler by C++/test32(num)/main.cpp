//Write a program to check the input if it's number or not
#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    string str;
    int i,flag=1,Count1=0,Count2=0,Count3=0;
    cout<<"Enter your input: ";
    cin>>str;
    cout<<endl;

    if(isdigit(str[0]))
    {
        for(i=1;i<str.length();i++)
            {
                if( !(isdigit(str[i]) || str[i]=='.' || str[i]=='-' || str[i]=='+' || str[i]=='e' || str[i]=='E') )
                {
                    flag=0;
                    break;
                }
                else
                {
                    if(str[i]=='.')
                    {
                        Count1++;
                        if(Count1>1)
                        {
                            flag=0;
                            break;
                        }
                    }
                    if( str[i]=='-' || str[i]=='+' )
                    {
                                Count2++;
                                if(Count2>1)
                                {
                                    flag=0;
                                    break;
                                }
                        if( !( isdigit(str[i-1]) && (str[i+1]=='E' || str[i+1]=='e') && Count1==1 ) )
                            {
                                flag=0;
                                break;
                            }
                    }
                    if( str[i]=='e' || str[i]=='E' )
                    {
                                Count3++;
                                if(Count3>1 || Count2==0)
                                {
                                    flag=0;
                                    break;
                                }
                    }
                }
            }

        if(flag==1)
            cout<<"It is a number\n";
        else
            cout<<"It is not a number\n";
    }
    else
        cout<<"It is not a number\n";
    return 0;
}
