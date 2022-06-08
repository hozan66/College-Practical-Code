#include <iostream>
using namespace std;
//Q) program for regular expression (a|b)*abb
int main()
{

    string str;
    int flag=1;
    cout<<"Enter Your Regular Expression: ";
    cin>>str;

    int n=str.length();

    if(str=="abb")
        flag=1;
    else
        {

              for (int i=0;i<n;i++)
                {
                    if( !( (str[i]=='a' || str[i]=='b') && (str[n-1]=='b' && str[n-2]=='b' && str[n-3]=='a') ) )
                    {
                        flag=0;
                        break;
                    }

                }
          }

    if(flag==1)
        cout<<"Accept"<<endl;
    else
        cout<<"Not Accept"<<endl;
    return 0;
}
