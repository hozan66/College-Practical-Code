#include <iostream>
using namespace std;
int const siz=20;
char stk[siz];
int top =-1;
void push(char d);
void pop();
bool checkempty();
bool ckeckfull();
string infix_to_postfix(string exp);
int priority(char c);
int main()
{
    string infixexp;
    cout<<"Enter an infix: ";
    cin>>infixexp;
    cout<<infix_to_postfix(infixexp)<<endl;
    return 0;
}

bool checkempty()
{
    if(top==-1)
    return true;
    else
        return false;

}

bool ckeckfull()
{
   if(top==siz-1)
        return true;
    else
        return false;
}

void push(char d)
{
    if(ckeckfull()) //top==siz-1
            cout<<"the stack is full\n";

    else
    {
        top++;
        stk[top]=d;
    }

}

void pop()
{
  if(checkempty())  //top==-1
    cout<<"the stack is empty\n";

    else
    {
        top--;
    }

}

int priority(char c)
{
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='^')
        return 3;
    else
        return 0;
}

string infix_to_postfix(string exp)
{
    string output="";
    for(int i=0;exp[i]!='\0';i++)
    {
          if(exp[i]=='(')
           push(exp[i]);
        else if(exp[i]==')')
        {
            while(stk[top]!='(')
            {
                output+=stk[top];
                    pop();
            }
              pop();//remove '('

        }
          else if(priority (exp[i])==0)
                output+=exp[i];
        else
        {
        //top!=-1
         while(    !checkempty()&&priority(exp[i])<=  priority(stk[top] )      )//pop if only the stack is not empty
                        {
                          output+=stk[top];
                          pop();
                        }
                     push(exp[i]);
        }

    }

    while(!checkempty())  //top!=-1
    {
        output+=stk[top];
        pop();
    }
    return output;
}
//ab-cd/+ef^g-/

/*
Enter you infix: 1+(7-(2+3)*6/8)-9
postfix:1723+6*8/-+9-

*/
