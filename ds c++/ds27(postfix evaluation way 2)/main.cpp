#include <iostream>
#include <cmath>
using namespace std;
int const siz=30;
float stk[siz];
int top=-1;
float op1;
char operat1;

bool checkempty();
bool checkfull();
void push(float d);
void pop();
float MathOperation(float op1,float op2,char operat);
float Evaluate(string exp);

int main()
{
    string exp;
    cout<<"Enter an Postfix Expression: ";
    cin>>exp;
    if(  Evaluate(exp)==0 && op1==0 && operat1=='/')
        cout<<"invalid math operation\n";
    else
    cout<<Evaluate(exp)<<endl;
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

void push(float d)
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

float MathOperation(float op1,float op2,char operat)
{
    if(operat=='+')
        return (op2+op1);
    else if(operat=='-')
        return op2-op1;
    else if(operat=='*')
        return op2*op1;
    else if(operat=='/')
        return op2/op1;
    else if(operat=='^')
        return pow(op2,op1);
        else
            return 0;
}

float Evaluate(string exp)
{
    float op2,result;
    for(int i=0;exp[i]!='\0';i++)
    {
       if(exp[i]!='+'&&exp[i]!='-'&&exp[i]!='*'&&exp[i]!='/'&&exp[i]!='^')//if(exp[i]>='0'&&exp[i]<='9')
        {
            push(exp[i]-'0');
        }

        else
        {
            op1=stk[top];
            pop();
            op2=stk[top];
            pop();
             operat1=exp[i];
            if(exp[i]=='/'&&op1==0)
                return 0;

            result=MathOperation(op1,op2,exp[i]);
            push(result);
        }
    }
    return stk[top];
}

/*
Enter an Postfix Expression: 382/+52
2

*/
