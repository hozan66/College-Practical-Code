#include <iostream>
#include <stack>
using namespace std;
int main()
{
   stack<char> stk1,stk2;
   string str1="ABCD";
   string str2="1234";

   for(int i=0;i<str1.length();i++)
   {

       stk1.push(str1[i]);
       stk2.push(str2[i]);
   }

   cout<<"size of stack="<<stk1.size()<<endl<<endl;
   //cout<<"size of stack="<<stk2.length()<<endl<<endl;    //error

   for(int i=0;i<str1.length();i++)
   {
       cout<<stk1.top()<<stk2.top()<<endl;
       stk1.pop();
       stk2.pop();
   }

   if(stk1.empty())
    cout<<"Stack is empty\n";

   cout<<"\nsize of stack="<<stk1.size()<<endl;
    return 0;
}
/*
size of stack=4

D4
C3
B2
A1
Stack is empty

size of stack=0

*/
