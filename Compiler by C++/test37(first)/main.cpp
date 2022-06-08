//Program for Left factoring of one step
/*
S --> aA/aBC   2 input
S --> aS'       1 output
S' --> A/BC     1 output
*/
#include <iostream>
using namespace std;
int main()
{
    string inp1,inp2,com="";
    int x=0,n,i;
    cout<<"Enter two string:\n S --> ";
    cin>>inp1>>inp2;
    cout<<endl;

    if(inp1.length() < inp2.length())
        n=inp1.length();
    else
        n=inp2.length();

    for(i=0; i<n; i++)
    {
        if(inp1[x]==inp2[x])
        {
            com+=inp1[x];
            x++;
        }
        else
            break;
    }
    cout<<"S --> "<<com<<"S'"<<endl;

    cout<<"S' --> ";
    for(i=x; i<inp1.length(); i++)
        cout<<inp1[i];

    cout<<"/";
    for(i=x; i<inp2.length(); i++)
        cout<<inp2[i];
    return 0;
}
/*
output:
Enter two string:
 S --> aA aBC

S --> aS'
S' --> A/BC
*/
