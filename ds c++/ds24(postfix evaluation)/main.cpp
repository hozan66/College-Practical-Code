#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>

float op2;
char operat1;
using namespace std;

float MathOperation(float op1,float op2,char operat)
{
    if(operat=='+')
        return op1+op2;
    else if(operat=='-')
        return op1-op2;
    else if(operat=='*')
        return op1*op2;
    else if(operat=='/')
        return op1/op2;
    else if(operat=='^')
        return pow(op1,op2);
        else
            return 0;
}

float postfix_evaluate(string exp)
{
    stack<float> stk;  //empty stack
    for(int i=0;i<exp.length();i++)
    {
        if(isdigit(exp[i]))
            stk.push(exp[i]-'0');
        else
        {
             op2=stk.top();
            stk.pop();

             float op1=stk.top();
            stk.pop();
            operat1=exp[i];
            if(exp[i]=='/'&&op2==0)
                return 0;
            float result=MathOperation(op1,op2,exp[i]);
            stk.push(result);
        }
    }
    return stk.top();
}
int main()
{
     string exp;
    cout<<"Enter an Postfix Expression: ";
    cin>>exp;
    if(  postfix_evaluate(exp)==0 && op2==0 && operat1=='/')
        cout<<"invalid math operation\n";
    else
    cout<<postfix_evaluate(exp)<<endl;
    return 0;
}
/*
evaluation of postfix expression
*/
