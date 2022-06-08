#include <iostream>

using namespace std;
//RE ==> a(bc)*
int main()
{
    string str="abcbcbcbcbcbc";
    int flag=1,i;

    if(str[0]=='a')
    {
        for(i=1;i<str.length();i+=2)
        {
            if( !(str[i]=='b' && str[i+1]=='c') )
            {
                flag=0;
                break;
            }
        }
    }

    if(str.empty())
        flag=0;

    if (flag==1)
        cout<<"Regular Expression is Accept"<<endl;
    else
        cout<<"Regular Expression is Not Accept"<<endl;
    return 0;
}
//Regular Expression is Accept
