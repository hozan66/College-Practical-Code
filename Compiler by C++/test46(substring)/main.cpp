#include <iostream>
//Check if it is a substring or not without using build-in function??
using namespace std;

int main()
{
    string mainStr="computer";
    string subStr="put";
    int flag=1,x=0,i,j;

    for(i=0;i<mainStr.length();i++)
    {
        if(subStr[0]==mainStr[i])
        {
            x=i;
            for(j=0;j<subStr.length();j++)
            {
                if(subStr[j]!=mainStr[x])
                {
                    flag=0;
                    break;
                }
                x++;
            }
        }
    }

    if (flag==1)
        cout<<subStr<<" is a substring of "<<mainStr<<endl;
    else
        cout<<subStr<<" is Not a substring of "<<mainStr<<endl;
    return 0;
}
