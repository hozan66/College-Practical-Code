#include <iostream>
using namespace std;
int news(int ch)
{
    switch(ch)
    {
        case '^': return 3; break;
        case '*':
        case '/': return 2; break;
        case '+':
        case '-': return 1; break;
        default : return 0;
    }
}

int main()
{
    char sk[20];
    string ex,post="";
    int w;
    cout<<"Enter you infix: ";
    cin>>ex;
    char ch;
    int t=-1;
    int i=0;

    while(ex[i]!='\0')
    {
        ch=ex[i];
        switch(ch)
        {
            case '(' :t++;
            sk[t]=ch;
            i++;
            continue;
            case ')' :
                while(sk[t]!='(')
                {
                    post+=sk[t];
                    t--;
                }
                t--;
                i++;
                continue;
                default : w=news(ch);
                if(w==0)
                    post+=ch;
                else
                {
                    if(t==-1||sk[t]=='(')
                    {
                        t++;
                        sk[t]=ch;
                    }
                    else
                    {
                        while(t!=-1&&sk[t]!='('&&w<=news(sk[t]))
                        {
                            post+=sk[t];
                            t--;
                        }
                        t++;
                        sk[t]=ch;
                    }
                }
        }
        i++;
    }

    while(t!=-1)
    {
        post+=sk[t];
        t--;
    }
    cout<<"postfix:"<<post<<endl;
    return 0;
}
//ab-cd/+ef^g-/
/*
Enter you infix: 1+(7-(2+3)*6/8)-9
postfix:1723+6*8/-+9-

*/
