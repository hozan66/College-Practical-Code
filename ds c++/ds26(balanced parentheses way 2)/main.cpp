#include <iostream>
using namespace std;
int const siz=30;
char stk[siz];
int top=-1;

bool checkempty();
bool checkfull();
void push(char d);
void pop();
bool arePair(char open,char close);
bool areBalanced(string exp);

int main()
{
    string exp;
    cout<<"Enter an Expression: ";
    cin>>exp;
    if(areBalanced(exp))
        cout<<"Balanced\n";
    else
    cout<<"Not Balanced\n";
    return 0;
}

bool checkempty()
{
    if(top==-1)
        return true;
    else
        return false;
}

bool checkfull()
{
    if(top==siz-1)
        return true;
    else
        return false;
}

void push(char d)
{
    if(checkfull())
        cout<<"stack is full\n";
    else
    {
        top++;
        stk[top]=d;
    }
}

void pop()
{
   if(checkempty())
    cout<<"stack is empty\n";
   else
    top--;
}

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
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        {
            if(checkempty())
                return false;
            else if(   !arePair(stk[top],exp[i])   )//arePair()==false
               return false;
            else
                pop();
        }
    }
    if(checkempty())
        return true;
    else
        return false;
}
/*
Enter an Expression: {([])}
Balanced

*/
