//program for a+ regular expression
#include <iostream>
using namespace std;
int main()
{
    string str;
    str="aabba";

    int flag=1;

    if (str.empty())
        flag=0;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='a' )
            {
                flag=0;
                break;
            }
    }

            if(flag==1)
                cout<<"Accept\n";
            else
                cout<<"Not Accept\n";

    return 0;
}
