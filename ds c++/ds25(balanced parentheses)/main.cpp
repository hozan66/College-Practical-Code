#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

bool arePair(char open,char close)
{
    if(open=='('&&close==')')
        return true;
    else if(open=='{'&&close=='}')
        return true;
        else if(open=='['&&close==']')
        return true;

        else
            return false;
}

bool areBalanced(string exp)
{
    stack<char> s;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            s.push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if(   s.empty() || !arePair(s.top(),exp[i])  )
                return false;
           else
            s.pop();
        }

    }
    if(s.empty())
        return true;
        else
            return false;
}

int main()
{
    string expression;
    cout<<"Enter an Expression: ";
    cin>>expression;
    if(areBalanced(expression))
        cout<<"Balanced\n";
    else
        cout<<"Not Balanced\n";
    return 0;
}
